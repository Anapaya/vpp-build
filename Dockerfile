# This container is used to build VPP from sources and generate .deb packages for both production
# and debug versions.
FROM ubuntu:18.04

RUN apt-get update && apt-get install -y software-properties-common
RUN add-apt-repository ppa:ubuntu-toolchain-r/test
RUN apt-get update && apt-get upgrade -y && apt-get install -y \
    gcc-9 \
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
WORKDIR /src/vpp
RUN git config --global user.name "Anapaya"
RUN git config --global user.email "anapaya@anapaya.net"
RUN git checkout -b $vpp_version-anapaya
COPY patches/* .
# git am fails if the patches were created with git option diff.noprefix=true
RUN git am *.patch

#RUN UNATTENDED=y make -C /src/vpp install-dep install-ext-deps
RUN UNATTENDED=y make -C /src/vpp install-dep
# DPDK MLX dependency
RUN apt-get update && apt-get upgrade -y && apt-get install -y libmnl-dev
RUN make -C /src/vpp build-release build
# FIXME(sgmonroy): Fix mellanox build (Anapaya/scion#5907)
#RUN make -C /src/vpp build-release build \
#    vpp_uses_dpdk_mlx5_pmd=yes \
#    vpp_uses_dpdk_mlx4_pmd=yes \
#    vpp_uses_dpdk_ibverbs_link_dlopen=yes

#RUN make -C /src/vpp pkg-deb pkg-deb-debug

CMD /bin/bash
