def vppapigen_json(name, api, out):
    native.genrule(
        name = name,
        srcs = [ api ],
        outs = [ out ],
        tools = ["@com_github_anapaya_vpp_build//:vppapigen", "@com_github_anapaya_vpp_build//:src"],
        cmd = "$(location @com_github_anapaya_vpp_build//:vppapigen)" +
            " --input $(location :" + api + ")" +
            " --includedir $(location @com_github_anapaya_vpp_build//:src)" +
            " JSON --output $@",
    )

def vppapigen_h(name, api, out):
    native.genrule(
        name = name,
        srcs = [ api ],
        outs = [ out ],
        tools = ["@com_github_anapaya_vpp_build//:vppapigen", "@com_github_anapaya_vpp_build//:src"],
        cmd = "$(location @com_github_anapaya_vpp_build//:vppapigen)" +
            " --input $(location :" + api + ")" +
            " --includedir $(location @com_github_anapaya_vpp_build//:src)" +
            " --output $@",
    )
