CC = gcc
CFLAGS = -Wall -g

SRC = src/*.c
OBJ = obj

INC = src/include/*.h

BIN = bin

LIB = lib/*.so

libtfidf: $(SRC)
	$(CC) $(CFLAGS) -c $(SRC) -I$(INC) -o $(OBJ)/$@.o

tfidf: $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -I$(INC) -o $(BIN)/tfidf

