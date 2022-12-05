all: main

main: 
	g++ src/main.cpp build/*.o -lallegro -lallegro_image -lallegro_main -o main 

match: board
	g++  -c src/match.cpp -o build/match.o

board: piece bishop king knight pawn queen rook
	g++  -c src/board.cpp -o build/board.o

piece:
	mkdir build/
	g++  -c src/pieces/piece.cpp -o build/piece.o

bishop:
	g++  -c src/pieces/bishop.cpp -o build/bishop.o

king:
	g++  -c src/pieces/king.cpp -o build/king.o

knight:
	g++ -c src/pieces/knight.cpp -o build/knight.o

rook:
	g++  -c src/pieces/rook.cpp -o build/rook.o

queen:
	g++  -c src/pieces/queen.cpp -o build/queen.o

pawn: piece
	g++  -c src/pieces/pawn.cpp -o build/pawn.o

test:
	
	g++ -I third_party/ build/*.o tests/board_test.cpp -o test

cm:
	rm -f main
	rm -f test

clear:
	rm -f main
	rm -rf build