# This container is used to build VPP from sources and generate .deb packages for both production
# and debug versions.
FROM ubuntu:16.04

RUN apt-get update && apt-get install -y software-properties-common
RUN add-apt-repository ppa:ubuntu-toolchain-r/test
RUN apt-get update && apt-get upgrade -y && apt-get install -y \
    gcc-7 \
    debian-archive-keyring \
    curl \
    gnupg \
    apt-transport-https \
    iproute2 \
    git \
    build-essential \
    sudo \
    binutils \
    telnet \
    libattr1 \
    gdb \
    strace \
    iptables

ARG vpp_version
RUN git clone --branch $vpp_version https://github.com/FDio/vpp.git /src/vpp
RUN UNATTENDED=y make -C /src/vpp install-dep
RUN make -C /src/vpp build-release build
#RUN make -C /src/vpp pkg-deb pkg-deb-debug

CMD /bin/bash
#
#RUN setcap cap_net_raw,cap_net_admin+eip /usr/bin/vpp
#
