load("@bazel_tools//tools/build_defs/pkg:pkg.bzl", "pkg_tar")
load(":vpp.bzl", "vpp_libs")

VPP_VERSION = "19.08"

vpp_libs("prod", "install-vpp-native", VPP_VERSION)

vpp_libs("debug", "install-vpp_debug-native", VPP_VERSION)

cc_library(
    name = "include",
    hdrs = glob([
        "install-vpp-native/include/**/*.h",
        "install-vpp-native/include/**/*.def",
    ]),
    visibility = ["//visibility:public"],
)

filegroup(
    name = "include-dir",
    srcs = [ "install-vpp-native/include" ],
    visibility = ["//visibility:public"],
)

filegroup(
    name = "src",
    srcs = glob([
        "vpp_src/**",
    ]),
    visibility = ["//visibility:public"],
)

load("@vpp_python_deps//:requirements.bzl", "requirement")

vppapigen_fn = "install-vpp-native/bin/vppapigen"
py_binary(
    name = "vppapigen",
    srcs = [
        vppapigen_fn + ".py",
        "install-vpp-native/share/vpp/vppapigen_c.py",
        "install-vpp-native/share/vpp/vppapigen_json.py",
    ],
    deps = [
        requirement("ply"),
    ],
    python_version = "PY3",
    visibility = ["//visibility:public"],
)

genrule(
    name = "rename-vppapigen",
    srcs = [ vppapigen_fn ],
    outs = [ vppapigen_fn + ".py" ],
    cmd = "mv $< $@",
)
