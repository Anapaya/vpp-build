load("@bazel_tools//tools/build_defs/pkg:pkg.bzl", "pkg_tar")

def vpp_libs(release, path, version):
    # XXX Unfortunately, we cannot use cc_library or cc_import targets as input for pkg_tar rules.
    # Set of libraries required to run VPP.
    native.filegroup(
        name = "libs_"+release,
        srcs = [
            "tarballs/tar_libs_"+release+".tar.xz",
        ],
        visibility = ["//visibility:public"],
    )
    native.filegroup(
        name = "plugins_"+release,
        srcs = [
            "tarballs/tar_plugins_"+release+".tar.xz",
        ],
        visibility = ["//visibility:public"],
    )
    native.filegroup(
        name = "bins_"+release,
        srcs = [
            "tarballs/tar_bins_"+release+".tar.xz",
        ],
        visibility = ["//visibility:public"],
    )

    pkg_tar(
        name = "tar_libs_"+release,
        srcs = [
            path+"/lib/libvppinfra.so."+version,
            path+"/lib/libsvm.so."+version,
            path+"/lib/libvlib.so."+version,
            path+"/lib/libvlibmemory.so."+version,
            path+"/lib/libvnet.so."+version,
            path+"/lib/liblcp.so."+version,
        ],
        extension = "tar.xz",
        visibility = ["//visibility:public"],
    )
    # Set of VPP provided plugins we are using.
    pkg_tar(
        name = "tar_plugins_"+release,
        srcs = [
            path+"/lib/vpp_plugins/dpdk_plugin.so",
            path+"/lib/vpp_plugins/avf_plugin.so",
            path+"/lib/vpp_plugins/rdma_plugin.so",
            path+"/lib/vpp_plugins/lacp_plugin.so",
            path+"/lib/vpp_plugins/vrrp_plugin.so",
            path+"/lib/vpp_plugins/ping_plugin.so",
            path+"/lib/vpp_plugins/nat_plugin.so",
            path+"/lib/vpp_plugins/memif_plugin.so",
            #path+"/lib/vpp_plugins/perfmon_plugin.so",
            path+"/lib/vpp_plugins/linux_cp_plugin.so",
            path+"/lib/vpp_plugins/linux_nl_plugin.so",
        ],
        extension = "tar.xz",
        visibility = ["//visibility:public"],
    )
    pkg_tar(
        name = "tar_bins_"+release,
        srcs = native.glob([
            path+"/bin/*",
        ]),
        extension = "tar.xz",
        visibility = ["//visibility:public"],
    )
