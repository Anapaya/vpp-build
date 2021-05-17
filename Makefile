VPP_VERSION := v21.01
DPDK_VERSION := 20.11

.PHONY: default clean

VPP_INSTALL_DIR=/src/vpp/build-root/install-vpp-native/vpp
VPP_DEBUG_INSTALL_DIR=/src/vpp/build-root/install-vpp_debug-native/vpp
VPP_EXTERNAL_SRC_DIR=/src/vpp/build-root/build-vpp_debug-native/external

default: clean docker_build
	docker rm vpp_build || true
	docker create --name vpp_build vpp_build
	docker cp vpp_build:/src/vpp/build-root/install-vpp-native/. install-vpp-native
	docker cp vpp_build:/src/vpp/build-root/install-vpp_debug-native/. install-vpp_debug-native
	bazel build //:tar_libs_prod //:tar_plugins_prod //:tar_bins_prod //:tar_mlx_libs_prod
	bazel build //:tar_libs_debug //:tar_plugins_debug //:tar_bins_debug //:tar_mlx_libs_debug
	cp -r install-vpp-native/vpp/include .
	mkdir -p src/vpp/src && docker cp vpp_build:/src/vpp/src/. src/vpp/src
	# copy generated headers to the source, as they are used as include for debug image
	cp -r install-vpp_debug-native/vpp/include/vlib/. src/vpp/src/vlib/
	cp -r install-vpp_debug-native/vpp/include/vlibmemory/. src/vpp/src/vlibmemory/
	cp -r install-vpp_debug-native/vpp/include/vnet/. src/vpp/src/vnet/
	cp -r install-vpp_debug-native/vpp/include/vppinfra/. src/vpp/src/vppinfra/
	cp -r install-vpp_debug-native/vpp/include/vpp/api/. src/vpp/src/vpp/api/
	cp -r install-vpp_debug-native/vpp/include/vpp_plugins/. src/vpp/src/plugins/

	# manually copy .api and .def files to include so we can generate APIs if needed
	# TODO instead provide tarball with generated JSON files, no need to generate VPP APIs

	find src/vpp/src/vpp/ -name "*.api" | sed 's,src/vpp/src,,' | \
		xargs -I{} cp src/vpp/src/{} include/{} || true

	find src/vpp/src/plugins/ -name "*.api" | sed 's,src/vpp/src/plugins/,,' | \
		xargs -I{} dirname include/vpp_plugins/{} | xargs -I{} mkdir -p {}
	find src/vpp/src/plugins/ -name "*.api" | sed 's,src/vpp/src/plugins/,,' | \
		xargs -I{} cp src/vpp/src/plugins/{} include/vpp_plugins/{}

	find src/vpp/src/plugins/ -name "*.def" | sed 's,src/vpp/src/plugins/,,' | \
		xargs -I{} dirname include/vpp_plugins/{} | xargs -I{} mkdir -p {}
	find src/vpp/src/plugins/ -name "*.def" | sed 's,src/vpp/src/plugins/,,' | \
		xargs -I{} cp src/vpp/src/plugins/{} include/vpp_plugins/{}

	# extract DPDK sources
	mkdir -p .$(VPP_EXTERNAL_SRC_DIR)
	wget https://fast.dpdk.org/rel/dpdk-$(DPDK_VERSION).tar.xz
	tar -C .$(VPP_EXTERNAL_SRC_DIR) -xaf dpdk-$(DPDK_VERSION).tar.xz && rm -f dpdk-$(DPDK_VERSION).tar.xz
	# extarct RDMA core sources
	docker cp vpp_build:$(VPP_EXTERNAL_SRC_DIR)/src-rdma-core .$(VPP_EXTERNAL_SRC_DIR)
	#docker cp vpp_build:$(VPP_EXTERNAL_SRC_DIR)/src-ipsec-mb .$(VPP_EXTERNAL_SRC_DIR)
	bazel build //:tar_vpp_src //:tar_include_prod //:tar_include_debug //:tar_vppapigen
	mkdir -p tarballs && cp bazel-bin/*xz tarballs/

docker_build:
	DOCKER_BUILDKIT=1 docker build -t vpp_build --build-arg vpp_version=$(VPP_VERSION) .

clean:
	rm -rf install-vpp-native install-vpp_debug-native include src tarballs
