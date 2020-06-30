load("@bazel_tools//tools/build_defs/pkg:pkg.bzl", "pkg_tar")
load(":vpp.bzl", "vpp_libs", "mlx_libs")

VPP_VERSION = "20.05"

vpp_libs("prod", "install-vpp-native/vpp", VPP_VERSION)
vpp_libs("debug", "install-vpp_debug-native/vpp", VPP_VERSION)

DPDK_MLX4_GLUE = "18.02.0"
DPDK_MLX5_GLUE = "20.02.0"

mlx_libs("prod", "install-vpp-native", DPDK_MLX4_GLUE, DPDK_MLX5_GLUE)
mlx_libs("debug", "install-vpp_debug-native", DPDK_MLX4_GLUE, DPDK_MLX5_GLUE)

cc_library(
    name = "include_prod",
    hdrs = glob([
        "include/**/*.h",
        "include/**/*.def",
    ]),
    visibility = ["//visibility:public"],
)

cc_library(
    name = "include_debug",
    hdrs = glob([
        "src/vpp/src/**/*.h",
        "src/vpp/src/**/*.def",
    ]),
    visibility = ["//visibility:public"],
)

filegroup(
    name = "vpp_include_prod",
    srcs = [
        "tarballs/tar_include_prod.tar.xz",
    ],
    visibility = ["//visibility:public"],
)
pkg_tar(
    name = "tar_include_prod",
    strip_prefix = ".",
    srcs = glob([
        "include/**/*.h",
        "include/**/*.def",
        "include/**/*.api",
    ]),
    extension = "tar.xz",
    visibility = ["//visibility:public"],
)

filegroup(
    name = "vpp_include_debug",
    srcs = [
        "tarballs/tar_include_debug.tar.xz",
    ],
    visibility = ["//visibility:public"],
)
pkg_tar(
    name = "tar_include_debug",
    strip_prefix = ".",
    srcs = glob([
        "src/vpp/src/**/*.h",
        "src/vpp/src/**/*.def",
        "src/vpp/src/**/*.api",
    ]),
    extension = "tar.xz",
    visibility = ["//visibility:public"],
)

filegroup(
    name = "include-dir",
    srcs = [ "include" ],
    visibility = ["//visibility:public"],
)

# https://github.com/bazelbuild/rules_pkg/issues/131
# https://github.com/bazelbuild/rules_pkg/pull/132
# Even with above fix we do not get the directory tree structure we want,
# so go back to use a directory instead.
filegroup(
    name = "vpp_src",
    srcs = [
        "tarballs/tar_vpp_src.tar.xz",
    ],
    visibility = ["//visibility:public"],
)

pkg_tar(
    name = "tar_vpp_src",
    srcs = [ "src" ],
    extension = "tar.xz",
    visibility = ["//visibility:public"],
)

load("@vpp_python_deps//:requirements.bzl", "requirement")

py_binary(
    name = "vppapigen",
    srcs = [
        "src/vpp/src/tools/vppapigen/vppapigen.py",
        "src/vpp/src/tools/vppapigen/vppapigen_c.py",
        "src/vpp/src/tools/vppapigen/vppapigen_json.py",
    ],
    deps = [
        requirement("ply"),
    ],
    python_version = "PY3",
    visibility = ["//visibility:public"],
)
