#include "CircleInSquare.h"

CircleInSquare::CircleInSquare(int c, int s) : Circle(c), Square(s)
{}

void CircleInSquare::print()
{
	Circle::print();
	Square::print();
}
