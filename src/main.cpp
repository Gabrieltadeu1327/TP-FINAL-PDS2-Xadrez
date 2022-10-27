#include "include/pawn.hpp"
#include <iostream>
#include<string>

using namespace std;

int main(){
	std::string s = "white";

	int spot[2] = {6, 0};
	Pawn p(s, spot);
	p.def_possible_movements();


	for(int i=0; i<8; i++){
		for(int j=0; j<8; j++){
			cout<<p._possibles_movements[i][j]<<" ";
		}
		 
	}
}
