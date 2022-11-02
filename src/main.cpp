#include "include/pieces/pawn.hpp"
#include <iostream>
#include <string>

using namespace std;

int main(){
	std::string s = "White";

	int spot[2] = {6, 0};
	Pawn p(" cor");
	p.def_possible_movements(spot);


	for(int i=0; i<8; i++){
		for(int j=0; j<8; j++){
			cout<<p._possibles_movements[i][j]<<" ";
		}
		 
	}
}
