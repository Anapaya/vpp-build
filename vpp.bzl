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
            #path+"/lib/vpp_plugins/perfmon_plugin.so",
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

def mlx_libs(release, path, mlx4_glue_ver, mlx5_glue_ver):
    native.filegroup(
        name = "mlx_libs_"+release,
        srcs = [
            "tarballs/tar_mlx_libs_"+release+".tar.xz",
        ],
        visibility = ["//visibility:public"],
    )
    pkg_tar(
        name = "tar_mlx_libs_"+release,
        srcs = [
            path+"/external/lib/librte_pmd_mlx4_glue.so."+mlx4_glue_ver,
            path+"/external/lib/librte_pmd_mlx5_glue.so."+mlx5_glue_ver,
        ],
        extension = "tar.xz",
        visibility = ["//visibility:public"],
    )
