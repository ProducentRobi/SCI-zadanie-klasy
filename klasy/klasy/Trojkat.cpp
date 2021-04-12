#include "Trojkat.h"
#include <iostream>
Trojkat::Trojkat(int a, int h)
{
	this->a = a;
	this->h = h;
}

int Trojkat::obliczeniepola()
{
	std::cout << "Pole trojkata = ";
	return (a * h) / 2;

}