VPP_VERSION := v19.08

default:
	DOCKER_BUILDKIT=1 docker build -t hsr_vpp_build --build-arg vpp_version=$(VPP_VERSION) .
	docker create --name hsr_vpp hsr_vpp_build
	docker cp hsr_vpp:/src/vpp/build-root/install-vpp-native/vpp install-vpp-native
	docker cp hsr_vpp:/src/vpp/build-root/install-vpp_debug-native/vpp install-vpp_debug-native

build-with-vol:
	DOCKER_BUILDKIT=1 docker build -v /mnt/host -t hsr_vpp_build --build-arg vpp_version=$(VPP_VERSION) .
