#pragma once
#include "Figura.h"
class Trapezu: Figura
{
	int a, b, h;
public:
	Trapezu(int a, int b, int h);
	int obliczeniepola();
};
