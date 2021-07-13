/*
 * Game.cpp
 *
 *  Created on: Feb 23, 2019
 *      Author: jtch9
 */
#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>

#include "TicTacHeader.h"
using namespace std;

char one='1';
char two='2';
char three='3';
char four='4';
char five='5';
char six='6';
char seven='7';
char eight='8';
char nine='9';
int gameOver=1;
bool use1=false;
bool use2=false;
bool use3=false;
bool use4=false;
bool use5=false;
bool use6=false;
bool use7=false;
bool use8=false;
bool use9=false;
void Game(char PlayerMarker,char ComMarker)
{
	bool checkSpace,checkIn;
	int position;
	while(gameOver!=0) //Game loop
	{
		TicTacBoard(PlayerMarker,ComMarker);
		cout<<"Enter your position:";cin>>position;
		checkIn=Checkin(position);
		if(checkIn==true) //check out of bound
	{
		cout<<"Invalid input: Out of bound"<<endl;
		checkIn=Checkin(position);
		Game(PlayerMarker,ComMarker);
	}

		checkSpace=CheckSpace(position,PlayerMarker,ComMarker);
		if(checkSpace==true) //check if position is occupied
	{
		cout<<"Invalid input: Position already occupied"<<endl;
		checkSpace=CheckSpace(position,PlayerMarker,ComMarker);
		Game(PlayerMarker,ComMarker);

	}
	else if(checkIn==false&&checkSpace==false)
	{
		cout<<"Player moves at "<<position<<endl;
		if(position==1)
		{
			one=PlayerMarker;
			use1=true;
			Winner( PlayerMarker, ComMarker);
		}
		else if(position==2)
		{
			two=PlayerMarker;
			use2=true;
			Winner( PlayerMarker, ComMarker);
		}
		else if(position==3)
		{
			three=PlayerMarker;
			use3=true;
			Winner( PlayerMarker, ComMarker);
		}
		else if(position==4)
		{
			four=PlayerMarker;
			use4=true;
			Winner( PlayerMarker, ComMarker);
		}
		else if(position==5)
		{
			five=PlayerMarker;
			use5=true;
			Winner( PlayerMarker, ComMarker);
		}
		else if(position==6)
		{
				six=PlayerMarker;
				use6=true;
				Winner( PlayerMarker, ComMarker);
		}
		else if(position==7)
		{
				seven=PlayerMarker;
				use7=true;
				Winner( PlayerMarker, ComMarker);
		}
		else if(position==8)
		{
				eight=PlayerMarker;
				use8=true;
				Winner( PlayerMarker, ComMarker);
		}
		else if(position==9)
		{
				nine=PlayerMarker;
				use9=true;
				Winner( PlayerMarker, ComMarker);
		}

		if(gameOver!=0)
		{
				PositionAssignment(PlayerMarker,ComMarker);
		}

		}
	}

}


