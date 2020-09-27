CC := cc
CFLAGS := -std=c89 -Wall -Wpedantic

build: permutations.exe

permutations.exe: permutations.o main.c
	$(CC) -o $@ $^

permutations.o: permutations.c permutations.h
	$(CC) -c $(CFLAGS) $<

.PHONY: build
