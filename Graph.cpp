// Graph.cpp

#include <iostream>
#include "Math.h"


void init(char* disp, int size_x, int size_y)
{
	for(int i=0; i<size_y; i++)
	{
		for(int j=0; j<size_x; j++)
		{
			*(disp+(i*size_y)+j) = '-'; 
			//disp[j][i] = '.';
		}
	}
}

void display(char* disp,int size_x, int size_y)
{
	for(int i=0; i<size_y; i++)
	{
		for(int j=0; j<size_x; i++)
		{
			std::cout<< *(disp+(i*size_x)+j);
		}
		std::cout<<std::endl;
	}	

}

void drawline( Vec2 p1,  Vec2 p2)
{
	// code
	
}


void drawAxes(char* disp, int size_x, int size_y)
{
	Vec2 axesPosX[2] = {Vec2(0, size_y/2), Vec2(size_x, size_y/2)};
	Vec2 axesPosY[2] = {Vec2(size_x/2, 0), Vec2(size_x/2, size_y)};

	// Draw x-axis
	drawline(axesPosX[0], axesPosX[1]);
	// Draw y-axis
	drawline(axesPosY[0], axesPosY[1]);

}
