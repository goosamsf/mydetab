SHELL = /bin/sh
CC=gcc
CFLAGS= -Wall -ansi -pedantic
MAIN= detab
OBJS = $(MAIN).o
TESTDIR = ./input
TESTINPUTS = $(TESTDIR)/*

all: $(MAIN)

clean: 
	rm -f $(OBJS) *~

$(MAIN): $(MAIN).o
	$(CC) $(CFLAGS) -o $(MAIN) $(OBJS)

detab.o: detab.c
	$(CC) -c $(CFLAGS) detab.c

run:
	./detab

