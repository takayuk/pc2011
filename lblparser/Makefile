CC=clang
CFLAGS=-Wall -g

SRC=src
INC=src/include

OBJ=obj
LIB=lib

BIN=bin

parser: $(SRC)/parser.c
	$(CC) $(CFLAGS) -c $(SRC) -I$(INC) -o $(OBJ)/$@.o

parser: $(LIB)/*.o
	$(CC) $(CFLAGS) $(LIB)/*.o -I$(INC) -o $(BIN)/$@

