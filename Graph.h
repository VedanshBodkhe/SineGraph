/*
 * This is Graph.h
 * A header file for the Graph library.
 * Author: Veaansh Bodkhe
 * This library is distributed under Apache v3.13 licence.
 */

#pragma once

#include "Math.h" 

void init(char* disp, int size_x, int size_y);

void display(char* disp, int size_x, int size_y);

void drawline( Vec2 p1,  Vec2 p2);

void drawAxes(char* disp, int size_x, int size_y);
