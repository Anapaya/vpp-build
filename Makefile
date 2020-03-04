VPP_VERSION := v19.08

.PHONY: default clean

default:
	DOCKER_BUILDKIT=1 docker build -t hsr_vpp_build --build-arg vpp_version=$(VPP_VERSION) .
	docker rm hsr_vpp
	docker create --name hsr_vpp hsr_vpp_build
	docker cp hsr_vpp:/src/vpp/build-root/install-vpp-native/vpp/. install-vpp-native
	docker cp hsr_vpp:/src/vpp/build-root/install-vpp_debug-native/vpp/. install-vpp_debug-native
	docker cp hsr_vpp:/src/vpp/src/. src

clean:
	rm -rf install-vpp-native install-vpp_debug-native src
