def vpp_libs(release, path, version):

    # XXX cc_import.hdrs does not allow for files with .def extension.
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
        deps = [":vppinfra_"+release],
        visibility = ["//visibility:public"],
    )
    native.cc_library(
        name = "vlib_"+release,
        srcs = [path+"/lib/libvlib.so."+version],
        hdrs = native.glob([
            path+"/include/vlib/**/*.h",
            path+"/include/vlib/**/*.def",
        ]),
        deps = [":vppinfra_"+release],
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
    native.cc_library(
        name = "dpdk_"+release,
        srcs = [path+"/lib/vpp_plugins/dpdk_plugin.so."+version],
        hdrs = native.glob([
            path+"/include/vpp_plugins/dpdk/**/*.h",
            path+"/include/vpp_plugins/dpdk/**/*.def",
        ]),
        visibility = ["//visibility:public"],
    )

    native.filegroup(
        name = "bins_"+release,
        srcs = native.glob([
            path+"/bin/*",
        ]),
        visibility = ["//visibility:public"],
    )

    native.filegroup(
        name = "vppapigen_"+release,
        srcs = [ path+"/bin/vppapigen" ],
        visibility = ["//visibility:public"],
    )
