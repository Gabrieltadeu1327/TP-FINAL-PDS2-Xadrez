all: main

main: clear match
	g++ src/main.cpp build/*.o build/pieces/*.o -lallegro -lallegro_image -lallegro_main -o build/main 

match: board
	g++  -c src/match.cpp -o build/match.o

board: piece bishop king knight pawn queen rook
	g++  -c src/board.cpp -o build/board.o

piece:
	mkdir build/
	mkdir build/pieces/
	mkdir build/tests/
	g++  -c src/pieces/piece.cpp -o build/pieces/piece.o

bishop:
	g++  -c src/pieces/bishop.cpp -o build/pieces/bishop.o

king:
	g++  -c src/pieces/king.cpp -o build/pieces/king.o

knight:
	g++ -c src/pieces/knight.cpp -o build/pieces/knight.o

rook:
	g++  -c src/pieces/rook.cpp -o build/pieces/rook.o

queen:
	g++  -c src/pieces/queen.cpp -o build/pieces/queen.o

pawn: piece
	g++  -c src/pieces/pawn.cpp -o build/pieces/pawn.o

tests:
	g++ -I third_party/ build/board.o build/pieces/*.o tests/board_test.cpp -o build/tests/board_test
	g++ -I third_party/ build/board.o build/pieces/*.o tests/pieces_test.cpp -o build/tests/pieces_test
	
.PHONY: tests all main 

cm:
	rm -f main
	rm -f test

clear:
	rm -f main
	rm -rf build