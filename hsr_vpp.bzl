
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
