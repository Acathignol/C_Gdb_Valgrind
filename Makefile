CC = gcc
BIN = gdb-tutorial ex1 ex2 ex3 ex4 ex5 ex6 ex7 ex8

all: gdb-tutorial

clean :
	rm $(BIN) 2> /dev/null | true
