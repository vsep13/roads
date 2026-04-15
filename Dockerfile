# Builder image for Logue SDK
FROM ubuntu:20.04 AS builder

ENV DEBIAN_FRONTEND=noninteractive
RUN apt-get update && apt-get install -y git make bzip2 wget zip && rm -rf /var/lib/apt/lists/*

# Install ARM GCC Toolchain (SDK standard version)
RUN wget -qO- https://developer.arm.com/-/media/Files/downloads/gnu-rm/9-2019q4/gcc-arm-none-eabi-9-2019-q4-major-x86_64-linux.tar.bz2 | tar -xj -C /opt
ENV PATH="/opt/gcc-arm-none-eabi-9-2019-q4-major/bin:$PATH"

# Clone the Logue SDK
RUN git clone https://github.com/korginc/logue-sdk.git /logue-sdk && cd /logue-sdk && git submodule update --init

# Copy our oscillator and build it
WORKDIR /app
COPY . .
RUN make LOGUE_SDK_DIR=/logue-sdk

# Export step
CMD cp build/*.mnlgxdunit /out/
