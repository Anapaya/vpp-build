#load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")

#http_archive(
#    name = "rules_python",
#    url = "https://github.com/bazelbuild/rules_python/releases/download/0.0.1/rules_python-0.0.1.tar.gz",
#    sha256 = "aa96a691d3a8177f3215b14b0edc9641787abaaa30363a080165d06ab65e1161",
#)
workspace(name="com_github_anapaya_vpp_build")

load(":repositories.bzl", "vpp_repositories")
vpp_repositories()

load(":deps.bzl", "vpp_deps")
vpp_deps()

load('@vpp_python_deps//:requirements.bzl', 'pip_install')
pip_install()
