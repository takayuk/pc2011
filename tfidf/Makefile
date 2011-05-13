CC = gcc
CFLAGS = -Wall -g

SRC = src
INC = src/include
OBJ = obj
BIN = bin
LIB = lib

PROGS = tfidf

all: $(PROGS)
clean:
	rm $(BIN)/tfidf
	rm $(OBJ)/*.o

tfidf: $(SRC)/parser.c $(SRC)/tfidf.c test_tfidf.c
	$(CC) $(CFLAGS) $(SRC)/parser.c $(SRC)/tfidf.c test_tfidf.c -I$(INC) -o $(BIN)/tfidf

