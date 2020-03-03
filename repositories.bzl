load("@bazel_tools//tools/build_defs/repo:git.bzl", "git_repository")

def vpp_repositories():
    """Download dependencies of vpp rules."""
    excludes = native.existing_rules().keys()

    if "rules_python" not in excludes:
        git_repository(
            name = "rules_python",
            remote = "https://github.com/bazelbuild/rules_python.git",
            commit = "94677401bc56ed5d756f50b441a6a5c7f735a6d4",
            shallow_since = "1573842889 -0500",
        )
