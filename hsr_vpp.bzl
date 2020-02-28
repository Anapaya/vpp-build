load("@bazel_tools//tools/build_defs/pkg:pkg.bzl", "pkg_tar")

def hsr_vpp_libs(release, path, version):

    libs = ["vppinfra","vlib","vlibmemory","vnet"]
    for lib in libs:
        native.cc_import(
            name = lib+"_"+release,
            shared_library = path+"/lib/lib"+lib+".so",
            visibility = ["//visibility:public"],
        )

    native.cc_library(
        name = "include_"+release,
        hdrs = native.glob([
            path+"/include/**/*",
        ]),
        visibility = ["//visibility:public"],
    )

    pkg_tar(
        name = "bins_"+release,
        package_dir = "/usr/bin",
        srcs = [
            path+"/bin/vpp",
        ],
        mode = "0555",
        visibility = ["//visibility:public"],
    )

    pkg_tar(
        name = "libs_"+release,
        package_dir = "/usr/lib/x86_64-linux-gnu",
        srcs = native.glob([
            path+"/lib/libsvm.so*",
            path+"/lib/libvppinfra.so*",
            path+"/lib/libvlibmemory.so*",
            path+"/lib/libvlib.so*",
            path+"/lib/libvnet.so*",
        ]),
        mode = "0555",
        visibility = ["//visibility:public"],
    )

    pkg_tar(
        name = "plugins_"+release,
        package_dir = "/usr/lib/x86_64-linux-gnu/vpp_plugins",
        srcs = [
            path+"/lib/vpp_plugins/dpdk_plugin.so",
        ],
        mode = "0555",
        visibility = ["//visibility:public"],
    )

    native.filegroup(
        name = "vppapigen_"+release,
        srcs = [ path+"/bin/vppapigen" ],
        visibility = ["//visibility:public"],
    )
