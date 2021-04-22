FROM jaschac/debian-gcc:latest

RUN apt-get update
RUN apt-get install -y socat gcc-multilib python
RUN rm -rf /var/lib/apt/lists/*

RUN mkdir -p /usr/src/pwn
WORKDIR /usr/src/pwn
RUN cd /usr/src/pwn/

COPY flag.txt .
RUN chmod 444 flag.txt
RUN adduser pwn
COPY challenge.c .

# Make sure to change this compile command depending on what you actually want.
# This is designed to be bascially as insecure as possible, so add back security measures are you need
RUN gcc -std=c99 -o challenge -m32 challenge.c -O0 -fno-stack-protector -g -Wno-deprecated-declarations


RUN chmod 111 challenge
RUN rm challenge.c
USER pwn
CMD socat -T60 TCP-LISTEN:1337,fork,reuseaddr EXEC:"./challenge"
