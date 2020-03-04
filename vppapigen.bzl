
def vppapigen(name, api, out, type = "C"):
    if type not in ["C", "JSON"]:
        fail(type, "type")

    native.genrule(
        name = name,
        srcs = [ api ],
        outs = [ out ],
        tools = [
            "@com_github_anapaya_vpp_build//:vppapigen",
            "@com_github_anapaya_vpp_build//:include-dir",
        ],
        cmd = "$(execpath @com_github_anapaya_vpp_build//:vppapigen)" +
            " --input $(rootpath :" + api + ")" +
            " --includedir $(rootpath @com_github_anapaya_vpp_build//:include-dir)" +
            " " + type +
            " --output $@",
    )
