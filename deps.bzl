load("@rules_python//python:repositories.bzl", "py_repositories")
load("@rules_python//python:pip.bzl", "pip_repositories", "pip3_import")

def vpp_deps():
    py_repositories()
    
    # Only needed if using the packaging rules.
    pip_repositories()

    pip3_import(
        name = 'vpp_python_deps',
        requirements = '@com_github_anapaya_vpp_build//:requirements.txt',
    )
