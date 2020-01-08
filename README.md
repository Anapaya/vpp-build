# Purpose

The purpose of this repo is to easily build VPP from sources, generating both 'release' and
'debug' binaries which will be commited to the the git repo.

This allows us to import the repo in bazel, then easily use it to include header files and
link against the appropiate shared libraries to generate the HSR containers we want.
