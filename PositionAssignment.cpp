/*
 * PositionAssignment.cpp
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
void PositionAssignment(char PlayerMarker,char ComMarker) //Computer moves
{
	int ComPosition;
	int check=0;

	while(check==0)
	{
		ComPosition=(rand()%9)+1;
		if((ComPosition==1&&false==use1))
		{
			check=1;
		}
		else if((ComPosition==2&&false==use2))
		{
			check=1;
		}
		else if((ComPosition==3&&false==use3))
		{
			check=1;
		}
		else if((ComPosition==4&&false==use4))
		{
			check=1;
		}
		else if((ComPosition==5&&false==use5))
		{
			check=1;
		}
		else if(	(ComPosition==6&&false==use6))
		{
			check=1;
		}
		else if((ComPosition==7&&false==use7))
		{
			check=1;
		}
		else if((ComPosition==8&&false==use8))
		{
			check=1;
		}
		else if((ComPosition==9&&false==use9))
		{
			check=1;
		}
	}

	cout<<"Computer moves at "<<ComPosition<<endl;
	if(ComPosition==1&&false==use1&&one!='X'&&one!='O')
	{
		one=ComMarker;
		use1=true;
		Winner( PlayerMarker, ComMarker);

	}
	else if(ComPosition==2&&false==use2&&two!='X'&&two!='O')
	{
		two=ComMarker;
		use2=true;
		Winner( PlayerMarker, ComMarker);

	}
	else if(ComPosition==3&&false==use3&&three!='X'&&three!='O')
	{
		three=ComMarker;
		use3=true;
		Winner( PlayerMarker, ComMarker);
	}
	else if(ComPosition==4&&false==use4&&four!='X'&&four!='O')
	{
		four=ComMarker;
		use4=true;
		Winner( PlayerMarker, ComMarker);
	}
	else if(ComPosition==5&&false==use5&&five!='X'&&five!='O')
	{
		five=ComMarker;
		use5=true;
		Winner( PlayerMarker, ComMarker);

	}
	else if(ComPosition==6&&false==use6&&six!='X'&&six!='O')
	{
		six=ComMarker;
		use6=true;
		Winner( PlayerMarker, ComMarker);

	}
	else if(ComPosition==7&&false==use7&&seven!='X'&&seven!='O')
	{
		seven=ComMarker;
		use7=true;
		Winner( PlayerMarker, ComMarker);

	}
	else if(ComPosition==8&&false==use8&&eight!='X'&&eight!='O')
	{
		eight=ComMarker;
		use8=true;
		Winner( PlayerMarker, ComMarker);

	}
	else if(ComPosition==9&&false==use9&&nine!='X'&&nine!='O')
	{
		nine=ComMarker;
		use9=true;
		Winner( PlayerMarker, ComMarker);

	}
}


