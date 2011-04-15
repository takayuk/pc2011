CC=gcc
CFLAGS=-Wall -g

SRC=src/*.c
OBJ=./*.o
INC=src/include/*.h
BIN=bin
LIB=lib

libparser: $(SRC)
	$(CC) $(CFLAGS) -c $(SRC) -I$(INC) -o $(LIB)

parser: $(SRC)
	$(CC) $(CFLAGS) $(OBJ) -I$(INC) -o $(BIN)/parser

