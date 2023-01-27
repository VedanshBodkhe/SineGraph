// main.cpp

#include <iostream>
#include "Graph.h"

int main()
{
	std::cout<<"This is a graph of sine function\n";
	int size_x(162), size_y(50); // Size of the graph (in chars)i
	char disp[size_x][size_y];

	//Initialising the display
	init((char*)disp, size_x, size_y);

	// Draw the x & y axis lines

	//Print the display
	display((char*)disp, size_x, size_y);
}
