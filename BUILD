load("@bazel_tools//tools/build_defs/pkg:pkg.bzl", "pkg_tar")
load(":vpp.bzl", "vpp_libs")

VPP_VERSION = "19.08.2"

vpp_libs("prod", "install-vpp-native", VPP_VERSION)

vpp_libs("debug", "install-vpp_debug-native", VPP_VERSION)

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
    srcs = [ "src" ],
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
