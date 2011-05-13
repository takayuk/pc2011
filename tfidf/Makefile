CC = gcc
CFLAGS = -Wall -g

SRC = src
INC = src/include
OBJ = obj
BIN = bin
LIB = lib/*.so

libparser: $(SRC)/parser.c
	$(CC) $(CFLAGS) -c $(SRC)/parser.c -I$(INC) -o $(OBJ)/$@.o

libtfidf: $(SRC)/tfidf.c
	$(CC) $(CFLAGS) -c $(SRC)/tfidf.c -I$(INC) -o $(OBJ)/$@.o

tfidf: $(OBJ)/*.o
	$(CC) $(CFLAGS) test_tfidf.c $(OBJ)/*.o -I$(INC) -o $(BIN)/tfidf

