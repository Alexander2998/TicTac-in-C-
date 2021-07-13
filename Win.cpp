/*
 * Win.cpp
 *
 *  Created on: Feb 21, 2019
 *      Author: jtch9
 */

#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>

#include "TicTacHeader.h"
using namespace std;

void Winner(char PlayerMarker,char ComMarker)
//each time player or computer make a move this function check if they have won
{

	if(one==PlayerMarker &&two==PlayerMarker&&three==PlayerMarker)
	{
		cout<<"Player wins"<<endl;
		TicTacBoard( PlayerMarker, ComMarker);
		gameOver=0;
	}
	else if(four==PlayerMarker && five==PlayerMarker && six==PlayerMarker)
	{
		cout<<"Player wins"<<endl;
		TicTacBoard( PlayerMarker, ComMarker);
		gameOver=0;
	}
	else if(seven==PlayerMarker && eight==PlayerMarker && nine==PlayerMarker)
	{
		cout<<"Player wins"<<endl;
		TicTacBoard( PlayerMarker, ComMarker);
		gameOver=0;
	}
	else if(one==PlayerMarker && four==PlayerMarker && seven==PlayerMarker)
	{
		cout<<"Player wins"<<endl;
		TicTacBoard( PlayerMarker, ComMarker);
		gameOver=0;
	}
	else if(two==PlayerMarker && five==PlayerMarker && eight==PlayerMarker)
	{
		cout<<"Player wins"<<endl;
		TicTacBoard( PlayerMarker, ComMarker);
		gameOver=0;
	}
	else if(three==PlayerMarker&&six==PlayerMarker&&nine==PlayerMarker)
	{
		cout<<"Player wins"<<endl;
		TicTacBoard( PlayerMarker, ComMarker);
		gameOver=0;
	}
	else if(one==PlayerMarker&&five==PlayerMarker&&nine==PlayerMarker)
	{
		cout<<"Player wins"<<endl;
		TicTacBoard( PlayerMarker, ComMarker);
		gameOver=0;

	}
	else if(three==PlayerMarker&&five==PlayerMarker&&seven==PlayerMarker)
	{
		cout<<"Player wins"<<endl;
		TicTacBoard( PlayerMarker, ComMarker);
		gameOver=0;

	}

	 else if (one==ComMarker&&two==ComMarker&&three==ComMarker)
	{
		cout<<"Computer wins"<<endl;
		TicTacBoard( PlayerMarker, ComMarker);
		gameOver=0;

	}
	  else if(four==ComMarker&&five==ComMarker&&six==ComMarker)
	{
		cout<<"Computer wins"<<endl;
		TicTacBoard( PlayerMarker, ComMarker);
		gameOver=0;

	}
	else if(seven==ComMarker&&eight==ComMarker&&nine==ComMarker)
	{
		cout<<"Computer wins"<<endl;
		TicTacBoard( PlayerMarker, ComMarker);
		gameOver=0;
	}
	else if(one==ComMarker&&four==ComMarker&&seven==ComMarker)
	{
		cout<<"Computer wins"<<endl;
		TicTacBoard( PlayerMarker, ComMarker);
		gameOver=0;

	}
	else if(two==ComMarker&&five==ComMarker&&eight==ComMarker)
	{
		cout<<"Computer wins"<<endl;
		TicTacBoard( PlayerMarker, ComMarker);
		gameOver=0;

	}
	else if(three==ComMarker&&six==ComMarker&&nine==ComMarker)
	{
		cout<<"Computer wins"<<endl;
		TicTacBoard( PlayerMarker, ComMarker);
		gameOver=0;
	}
	else if(one==ComMarker&&five==ComMarker&&nine==ComMarker)
	{
		cout<<"Computer wins"<<endl;
		TicTacBoard( PlayerMarker, ComMarker);
		gameOver=0;
	}
	else if(three==ComMarker&&five==ComMarker&&seven==ComMarker)
	{
		cout<<"Computer wins"<<endl;
		TicTacBoard( PlayerMarker, ComMarker);
		gameOver=0;

	}
	else if (use1==true&&use2==true&&use3==true&&use4==true&&use5==true
			&&use6==true&&use7==true&&use8==true&&use9==true)
	{
		cout<<"Gave over.No one wins."<<endl;
		TicTacBoard( PlayerMarker, ComMarker);
		gameOver=0;
	}

}


