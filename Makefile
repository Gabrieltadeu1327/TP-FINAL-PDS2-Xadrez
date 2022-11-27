
CC := g++
CFLAGS := -g -Wall -I include/
BUILD := build/
SRC := src/
TARGET := main.out

all: main

main: board 
	g++ board.o main.cpp -lallegro -lallegro_images -lallegro_main -o build/main.out

board: piece pawn knight king bishop queen rook
	g++ build/*.o src/board.cpp -o build/board.o

piece: 
	g++ -c src/pieces/piece.cpp -o build/piece.o

pawn:
	g++ -c src/pieces/pawn.cpp -o build/pawn.o

knight:
	g++ -c src/pieces/knight.cpp -o build/knight.o

king:
	g++ -c src/pieces/king.cpp -o build/king.o

bishop:
	g++ -c src/pieces/bishop.cpp -o build/bishop.o

queen:
	g++ -c src/pieces/queen.cpp -o build/queen.o

rook:
	g++ -c src/pieces/rook.cpp -o build/rook.o


clean:

	$(RM) -r $(BUILD)/* $(TARGET)

''

