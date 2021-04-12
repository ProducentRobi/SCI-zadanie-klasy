#include "Kolo.h"
#include <iostream>
Kolo::Kolo(int r)
{
	this->r = r;
}

int Kolo::obliczeniepola()
{
	std::cout << "Pole kola = ";
	return (r * r) * 3.14;

}

