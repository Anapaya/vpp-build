# Purpose

The purpose of this repo is to easily build VPP from sources, generating both 'release' and
'debug' binaries which will be commited to the the git repo.

This allows us to import the repo in bazel, then easily use it to include header files and
link against the appropiate shared libraries to generate the HSR containers we want.

# bazel targets

There are two sets of targets, production (-O2) and debug (-O0).

prod targets:
- include_prod: all prod VPP header files
- vppinfra_prod: vppinfra shared library
- vlib_prod: vlib shared library
- vlibmemory_prod: vlibmemory shared library
- vnet_prod: vnet shared library

debug targets:
- include_debug: all debug VPP header files
- vppinfra_debug: vppinfra shared library
- vlib_debug: vlib shared library
- vlibmemory_debug: vlibmemory shared library
- vnet_debug: vnet shared library
