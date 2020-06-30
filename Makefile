VPP_VERSION := v20.05
DPDK_VERSION := 20.02

.PHONY: default clean

VPP_INSTALL_DIR=/src/vpp/build-root/install-vpp-native/vpp
VPP_DEBUG_INSTALL_DIR=/src/vpp/build-root/install-vpp_debug-native/vpp
VPP_EXTERNAL_SRC_DIR=/src/vpp/build-root/build-vpp_debug-native/external

default:
	DOCKER_BUILDKIT=1 docker build -t hsr_vpp_build --build-arg vpp_version=$(VPP_VERSION) .
	docker rm hsr_vpp || true
	docker create --name hsr_vpp hsr_vpp_build
	rm -rf install-vpp-native install-vpp_debug-native
	docker cp hsr_vpp:/src/vpp/build-root/install-vpp-native/. install-vpp-native
	docker cp hsr_vpp:/src/vpp/build-root/install-vpp_debug-native/. install-vpp_debug-native
	bazel build //:tar_libs_prod //:tar_plugins_prod //:tar_bins_prod //:tar_mlx_libs_prod
	bazel build //:tar_libs_debug //:tar_plugins_debug //:tar_bins_debug //:tar_mlx_libs_debug
	rm -rf tarballs && mkdir -p tarballs && cp bazel-bin/*xz tarballs/
	rm -rf include && cp -r install-vpp-native/vpp/include .
	# manually copy missing .api and .def files
	find src/vpp/src/vpp/ -name "*.api" | sed 's,src/vpp/src,,' | \
		xargs -I{} cp src/vpp/src/{} include/{} || true
	find src/vpp/src/plugins/ -name "*.api" | sed 's,src/vpp/src/plugins,,' | \
		xargs -I{} cp src/vpp/src/plugins/{} include/vpp_plugins/{} || true
	find src/vpp/src/plugins/ -name "*.def" | sed 's,src/vpp/src/plugins,,' | \
		xargs -I{} cp src/vpp/src/plugins/{} include/vpp_plugins/{} || true
	rm -rf src && mkdir -p src/vpp/src && docker cp hsr_vpp:/src/vpp/src/. src/vpp/src
	cp -r install-vpp_debug-native/vpp/include/. src/vpp/src/
	mkdir -p .$(VPP_EXTERNAL_SRC_DIR)
	wget https://fast.dpdk.org/rel/dpdk-$(DPDK_VERSION).tar.xz
	tar -C .$(VPP_EXTERNAL_SRC_DIR) -xaf dpdk-$(DPDK_VERSION).tar.xz && rm -f dpdk-$(DPDK_VERSION).tar.xz
	docker cp hsr_vpp:$(VPP_EXTERNAL_SRC_DIR)/src-rdma-core .$(VPP_EXTERNAL_SRC_DIR)
	#docker cp hsr_vpp:$(VPP_EXTERNAL_SRC_DIR)/src-ipsec-mb .$(VPP_EXTERNAL_SRC_DIR)

clean:
	rm -rf src/vpp
