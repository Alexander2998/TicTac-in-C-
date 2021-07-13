/*
 * Checkin.cpp
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

int position;
bool Checkin(int input) //check for out of bound
{
		if(input<1 ||input>9)
			{
				return true;
			}

		return false;

}

