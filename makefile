#compiler
CC = gcc

#sourcefiles
SRC = $(wildcard src/*.c)

CFLAGS = -Wall -nostdlib

INCLUDE = -Iheader

sockets:
	$(CC) $(CFLAGS) $(INCLUDE) -o sockets $(SRC) && ./sockets

	
clean:
	rm sockets


