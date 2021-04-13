#include <iostream>
#include "Prostokat.h"

Prostokat::Prostokat() {}

Prostokat::~Prostokat() {}

float Prostokat::pole(float a, float b)
{
	float pole = 0;
	pole = a * b;
	return pole;
}

float Prostokat::obwod(float a, float b)
{
	float obwod = 0;
	obwod = (2 * a) + (2 * b);
	return obwod;
}