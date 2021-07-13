/*
 * TicTacBoard.cpp
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

void TicTacBoard(char PlayerMarker,char ComMarker)
//print the board
{
		cout<<setw(20)<<"Tic Tac Toe "<<endl;
		cout<<"User:"<<PlayerMarker<<" - "<<"Computer:"<<ComMarker<<endl;
		cout<<setw(5)<<one<<" | "<<two<<" | "<<three<<" | "<<endl;
		cout<<setw(5)<<"-"<<"   "<<"-"<<"   "<<"-"<<"   "<<endl;
		cout<<setw(5)<<four<<" | "<<five<<" | "<<six<<" | "<<endl;
		cout<<setw(5)<<"-"<<"   "<<"-"<<"   "<<"-"<<"   "<<endl;
		cout<<setw(5)<<seven<<" | "<<eight<<" | "<<nine<<" | "<<endl;
		cout<<setw(5)<<"-"<<"   "<<"-"<<"   "<<"-"<<"   "<<flush<<endl;
}




