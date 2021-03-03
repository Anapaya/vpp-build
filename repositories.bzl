load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")

def vpp_repositories():
    """Download dependencies of vpp rules."""
    excludes = native.existing_rules().keys()

    if "rules_python" not in excludes:
        http_archive(
            name = "rules_python",
            sha256 = "48f7e716f4098b85296ad93f5a133baf712968c13fbc2fdf3a6136158fe86eac",
            strip_prefix = "rules_python-0.1.0",
            url = "https://github.com/bazelbuild/rules_python/archive/0.1.0.tar.gz",
        )
