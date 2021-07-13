/*
 * FlipCoin.cpp
 *
 *  Created on: Feb 24, 2019
 *      Author: jtch9
 */

#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>

#include "TicTacHeader.h"
using namespace std;

void FlipCoin(char PlayerMarker,char ComMarker) //flip coin.Player choose 1 or 2 to guess
{
		int guess, answer;
		srand(time(NULL));
		answer=(rand()%2)+1;
		cout<<"Flip a coin. Choose either 1 or 2:";cin>>guess;
		if(answer==guess)
		{
			cout<<"Player gets the first move.\n";
		}
		else if(answer!=guess) //if player goes second the computer gets the first move
		{
			cout<<"Player gets the second move.\n";
			PositionAssignment(PlayerMarker,ComMarker);

		}

}


