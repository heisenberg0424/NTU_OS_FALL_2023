FROM 32bit/ubuntu:16.04

USER root
RUN apt-get update && apt-get install -y \
	nano \
	make \
	build-essential \
	ed \
	git \
	zsh \
	gdb \
	wget 

RUN sh -c "$(wget -O- https://github.com/deluan/zsh-in-docker/releases/download/v1.1.5/zsh-in-docker.sh)"

