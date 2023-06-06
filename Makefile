CC=gcc
STD=-std=gnu99
BIN=game.bin
OBJ=main.o game2048.o direction.o tools.o
FLAG=-Wall -Werror -DDEBUG

all:$(OBJ)
	$(CC) -o $(BIN) $(OBJ) && ./$(BIN)
main.o:main.c game2048.h 
	$(CC) $(STD) $(FLAG) -c main.c
game2048.o:game2048.c game2048.h direction.h tools.h
	$(CC) $(STD) $(FLAG) -c game2048.c
direction.o:direction.c direction.h game2048.h tools.h
	$(CC) $(STD) $(FLAG) -c direction.c
tools.o:tools.c tools.h game2048.h
	$(CC) $(STD) $(FLAG) -c tools.c

clean:
	rm -rf $(BIN) $(OBJ)




