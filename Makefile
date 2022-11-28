all: main

main:
	g++ -I include/ src/main.cpp build/*.o -lallegro -lallegro_image -lallegro_main -o main 

match: board
	g++ -g -Wall -I include/ -c src/match.cpp build/board.o -o build/match.o

board: piece bishop king knight pawn queen rook
	g++ -g -Wall -I include/ -c src/board.cpp build/*.o -o build/board.o

piece:
	mkdir build/
	g++ -g -Wall -I include/pieces/ -c src/pieces/piece.cpp -o build/piece.o

bishop:
	g++ -g -Wall -I include/pieces/ -c src/pieces/bishop.cpp build/piece.o -o build/bishop.o

king:
	g++ -g -Wall -I include/pieces/ -c src/pieces/king.cpp build/piece.o -o build/king.o

knight:
	g++ -g -Wall -I include/pieces/ -c src/pieces/knight.cpp build/piece.o -o build/knight.o

rook:
	g++ -g -Wall -I include/pieces/ -c src/pieces/rook.cpp build/piece.o -o build/rook.o

queen:
	g++ -g -Wall -I include/pieces/ -c src/pieces/queen.cpp build/piece.o -o build/queen.o

pawn: piece
	g++ -g -Wall -I include/pieces/ -c src/pieces/pawn.cpp build/piece.o -o build/pawn.o

test: board
	mkdir test_bin
	g++ -g -Wall -I include/ -c src/test.cpp build/board.o -o build/test.o

cm:
	rm -f main

clear:
	rm -f main
	rm -rf build