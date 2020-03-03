load("@bazel_tools//tools/build_defs/pkg:pkg.bzl", "pkg_tar")
load(":vpp.bzl", "vpp_libs")

VPP_VERSION = "19.08"

vpp_libs("prod", "install-vpp-native", VPP_VERSION)

vpp_libs("debug", "install-vpp_debug-native", VPP_VERSION)

filegroup(
    name = "src",
    # XXX do not use glob as it flattens all the files
    srcs = ["vpp_src"],
    visibility = ["//visibility:public"],
)

load("@vpp_python_deps//:requirements.bzl", "requirement")

vppapigen_fn = "install-vpp-native/bin/vppapigen"
py_binary(
    name = "vppapigen",
    srcs = [ vppapigen_fn + ".py" ],
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
