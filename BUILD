load("@bazel_tools//tools/build_defs/pkg:pkg.bzl", "pkg_tar")
load(":hsr_vpp.bzl", "hsr_vpp_libs")

VPP_VERSION = "19.08"

hsr_vpp_libs("prod", "install-vpp-native", VPP_VERSION)

hsr_vpp_libs("debug", "install-vpp_debug-native", VPP_VERSION)

pkg_tar(
	name = "vpp-src",
	package_dir = "/src/vpp/src",
	strip_prefix = "vpp_src",
	srcs = [ "vpp_src"],
	mode = "0444",
	visibility = ["//visibility:public"],
)
