#include "Trapez.h"
#include <iostream>
Prostokat::Prostokat(int a, int b)
{
	this->a = a;
	this->b = b;
	this->h = h;
}

int Trapez::obliczeniepola()
{
	std::cout << "Pole Trapezu = ";
	return ((a * b) + h) / 2;

}