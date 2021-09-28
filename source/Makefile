# Makefile for all crackme programs

CC=gcc
CFLAGS=-z execstack -no-pie -fno-stack-protector
BINARY_DIR=../binaries

all: crackme0x00 \
	crackme0x01 \
	crackme0x02 \
	crackme0x03 \
	crackme0x04 \
	crackme0x05 \
	crackme0x06 \
	crackme0x07 \
	crackme0x08 \
	crackme0x09


crackme0x00: crackme0x00.c
	$(CC) $(CFLAGS) -o $(BINARY_DIR)/crackme0x00 crackme0x00.c

crackme0x01: crackme0x01.c
	$(CC) $(CFLAGS) -o $(BINARY_DIR)/crackme0x01 crackme0x01.c

crackme0x02: crackme0x02.c
	$(CC) $(CFLAGS) -o $(BINARY_DIR)/crackme0x02 crackme0x02.c

crackme0x03: crackme0x03.c
	$(CC) $(CFLAGS) -o $(BINARY_DIR)/crackme0x03 crackme0x03.c

crackme0x04: crackme0x04.c
	$(CC) $(CFLAGS) -o $(BINARY_DIR)/crackme0x04 crackme0x04.c

crackme0x05: crackme0x05.c
	$(CC) $(CFLAGS) -o $(BINARY_DIR)/crackme0x05 crackme0x05.c

crackme0x06: crackme0x06.c
	$(CC) $(CFLAGS) -o $(BINARY_DIR)/crackme0x06 crackme0x06.c

crackme0x07: crackme0x07.c
	$(CC) $(CFLAGS) -s -o $(BINARY_DIR)/crackme0x07 crackme0x07.c

crackme0x08: crackme0x08.c
	$(CC) $(CFLAGS) -o $(BINARY_DIR)/crackme0x08 crackme0x08.c

crackme0x09: crackme0x09.c
	$(CC) $(CFLAGS) -s -o $(BINARY_DIR)/crackme0x09 crackme0x09.c

clean:
	rm $(BINARY_DIR)/crackme0x*
