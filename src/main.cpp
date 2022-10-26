#include "include/pieces/piece.hpp"
#include "include/pieces/pawn.hpp"
#include <iostream>

using namespace std;

int main(){
	int spot[2] = {6, 0};
	Pawn *p = new Pawn("white", spot);
	p->def_possible_movements();
	int *poss = p->get_possibles();

	
}