/*
 * CheckSpace.cpp
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

bool CheckSpace(int input,char PlayerMarker,char ComMarker) //check if position is occupied
{
	if((input==1 && one==ComMarker)||(input==1 && one==PlayerMarker))
		{
			return true;
		}
	if((input==2 &&two==ComMarker)||(input==2 && two==PlayerMarker))
		{

			return true;
		}
	if((input==3 &&three==ComMarker)||(input==3 && three==PlayerMarker))
		{

			return true;
		}
	if((input==4 &&four==ComMarker)||(input==4 && four==PlayerMarker))
		{
			return true;
		}
	if((input==5 &&five==ComMarker)||(input==5 && five==PlayerMarker))
		{
			return true;
		}
	if((input==6 &&six==ComMarker)||(input==6 && six==PlayerMarker))
		{
			return true;
		}
	if((input==7 &&seven==ComMarker)||(input==7 && seven==PlayerMarker))
		{
			return true;
		}
	if((input==8 &&eight==ComMarker)||(input==8 && eight==PlayerMarker))
		{

			return true;
		}
	if((input==9 &&nine==ComMarker)||(input==9 && nine==PlayerMarker))
		{

			return true;
		}
	return false;
}



