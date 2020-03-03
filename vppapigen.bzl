_path = "external/com_github_anapaya_vpp_build/install-vpp-native/"

def vppapigen_json(name, api, out):
    native.genrule(
        name = name,
        srcs = [ api ],
        outs = [ out ],
        tools = [
            "@com_github_anapaya_vpp_build//:vppapigen",
            "@com_github_anapaya_vpp_build//:include-dir",
        ],
        cmd = "$(location @com_github_anapaya_vpp_build//:vppapigen)" +
            " --pluginpath " + _path + "share/vpp" +
            " --input $(location :" + api + ")" +
            " --includedir " + _path + "include" +
            " JSON --output $@",
    )

def vppapigen_h(name, api, out):
    native.genrule(
        name = name,
        srcs = [ api ],
        outs = [ out ],
        tools = [
            "@com_github_anapaya_vpp_build//:vppapigen",
            "@com_github_anapaya_vpp_build//:include-dir",
        ],
        cmd = "$(location @com_github_anapaya_vpp_build//:vppapigen)" +
            " --pluginpath " + _path + "share/vpp" +
            " --input $(location :" + api + ")" +
            " --includedir " + _path + "include" +
            " --output $@",
    )
