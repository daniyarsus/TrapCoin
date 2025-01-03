FROM ubuntu:22.04

RUN apt-get update &&  \
    sudo add-apt-repository ppa:pistache+team/unstable \
    apt-get install -y \
    build-essential \
    meson \
    ninja-build \
    libpqxx-dev \
    sudo apt install libpistache-dev \
    && rm -rf /var/lib/apt/lists/*

COPY . /service
WORKDIR /service

RUN meson setup builddir && meson compile -C builddir

CMD ["./builddir/'AutoBuilder'"]
