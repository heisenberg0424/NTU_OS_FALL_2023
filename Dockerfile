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
	csh \
	clang-format \
	wget 

RUN sh -c "$(wget -O- https://github.com/deluan/zsh-in-docker/releases/download/v1.1.5/zsh-in-docker.sh)"
RUN	git clone https://github.com/Mipu94/peda-heap.git ~/peda-heap
RUN	echo "source ~/peda-heap/peda.py" >> ~/.gdbinit
