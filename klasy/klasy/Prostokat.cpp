#include "Prostokat.h"
#include <iostream>
Prostokat::Prostokat(int a, int b)
{
	this->a = a;
	this->b = b;
}

int Prostokat::obliczeniepola()
{
	std::cout << "Pole prostokata = ";
	return a * b;
	
}