#include "Square.h"
#include <iostream>

Square::Square(int s) : side(s)
{}

void Square::print()
{
	std::cout << "Side: " << side << std::endl;
}
