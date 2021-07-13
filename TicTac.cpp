//============================================================================
// Name        : TicTac.cpp
// Author      : Alex Chen
// Professor   : Schueckler
// Course      : CPET 121-03
// Description : Tic-Tac-Toe Project 2
//============================================================================
//Best implementation

#include <iostream>
#include <ctime>
#include <cstdlib>

#include "TicTacHeader.h"

using namespace std;

int main() {

	char PlayerMarker,ComMarker;
	cout<<"Choose your marker(X,O):";cin>>PlayerMarker;
	if(PlayerMarker=='X'||PlayerMarker=='x') //Choose X or O
	{
		PlayerMarker='X';
		ComMarker='O';
	}
	else if(PlayerMarker=='O'||PlayerMarker=='o')
	{
		PlayerMarker='O';
		ComMarker='X';
	}

	FlipCoin(PlayerMarker,ComMarker); //coin flip
	cout << "Below you will indicate your position (1-9) as shown in the table."<<endl;

	Game(PlayerMarker,ComMarker);


	return 0;
}
