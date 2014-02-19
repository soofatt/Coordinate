#include "Coordinate.h"
#include "Multiply.h"
#include <stdio.h>

Coordinate setCoordinate(int x, int y){
	Coordinate coor;
	
	coor.x = x;
	coor.y = y;
	
	return coor;
}

Coordinate multiplyCoordinate(int x, int y, int multiplier){
	Coordinate coor;
	
	coor.x = multiply(x, multiplier);
	coor.y = multiply(y, multiplier);
	
	return coor;
}