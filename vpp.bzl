def vpp_libs(release, path, version):

    # XXX cc_import.hdrs does not allow for files with .def extension.
    # https://github.com/bazelbuild/bazel/issues/6767
    native.cc_library(
        name = "vppinfra_"+release,
        srcs = [path+"/lib/libvppinfra.so."+version],
        hdrs = native.glob([
            path+"/include/vppinfra/**/*.h",
            path+"/include/vppinfra/**/*.def",
        ]),
        visibility = ["//visibility:public"],
    )
    native.cc_library(
        name = "svm_"+release,
        srcs = [path+"/lib/libsvm.so."+version],
        hdrs = native.glob([
            path+"/include/svm/**/*.h",
            path+"/include/svm/**/*.def",
        ]),
        deps = [
            ":vppinfra_"+release,
        ],
        visibility = ["//visibility:public"],
    )
    native.cc_library(
        name = "vlib_"+release,
        srcs = [path+"/lib/libvlib.so."+version],
        hdrs = native.glob([
            path+"/include/vlib/**/*.h",
            path+"/include/vlib/**/*.def",
        ]),
        deps = [
            ":vppinfra_"+release,
        ],
        visibility = ["//visibility:public"],
    )
    native.cc_library(
        name = "vlibmemory_"+release,
        srcs = [path+"/lib/libvlibmemory.so."+version],
        hdrs = native.glob([
            path+"/include/vlibmemory/**/*.h",
            path+"/include/vlibmemory/**/*.def",
            path+"/include/vlibapi/**/*.h",
            path+"/include/vlibapi/**/*.def",
        ]),
        deps = [
            ":vppinfra_"+release,
            ":svm_"+release,
            ":vlib_"+release,
        ],
        visibility = ["//visibility:public"],
    )
    native.cc_library(
        name = "vnet_"+release,
        srcs = [path+"/lib/libvnet.so."+version],
        hdrs = native.glob([
            path+"/include/vnet/**/*.h",
            path+"/include/vnet/**/*.def",
        ]),
        deps = [
            ":vppinfra_"+release,
            ":svm_"+release,
            ":vlib_"+release,
        ],
        visibility = ["//visibility:public"],
    )
    # XXX Unfortunately, we cannot use cc_library or cc_import targets as input for pkg_tar rules.
    # Set of libraries required to run VPP.
    native.filegroup(
        name = "libs_"+release,
        srcs = [
            path+"/lib/libvppinfra.so."+version,
            path+"/lib/libsvm.so."+version,
            path+"/lib/libvlib.so."+version,
            path+"/lib/libvlibmemory.so."+version,
            path+"/lib/libvnet.so."+version,
        ],
        visibility = ["//visibility:public"],
    )
    # Set of VPP provided plugins we are using.
    native.filegroup(
        name = "plugins_"+release,
        srcs = [
            path+"/lib/vpp_plugins/dpdk_plugin.so",
        ],
        visibility = ["//visibility:public"],
    )

    native.filegroup(
        name = "bins_"+release,
        srcs = native.glob([
            path+"/bin/*",
        ]),
        visibility = ["//visibility:public"],
    )
