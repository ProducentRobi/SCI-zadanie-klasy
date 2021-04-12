#include "Szescian.h"
#include <iostream>
Szescian::Szescian(int a)
{
	this->a = a;
}

int Szescian::obliczeniepola()
{
	std::cout << "Pole szescianu = ";
	return 6 * (a*a);

}