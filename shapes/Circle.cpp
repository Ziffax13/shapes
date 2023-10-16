#include "Circle.h"
#include <iostream>

Circle::Circle(int c) : circumference(c)
{}

void Circle::print()
{
	std::cout << "Circumference: " << circumference << std::endl;
}
