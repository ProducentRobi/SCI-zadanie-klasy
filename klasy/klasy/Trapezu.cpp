#include "Trapezu.h"
#include <iostream>
Trapezu::Trapezu(int a, int b, int h)
{
	this->a = a;
	this->b = b;
	this->h = h;
}

int Trapezu::obliczeniepola()
{
	std::cout << "Pole trapezu = ";
	return ((a + b) * h) / 2;

}