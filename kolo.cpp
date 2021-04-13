#include <iostream>
#include <math.h>
#include "kolo.h"

Kolo::Kolo() {}

Kolo::~Kolo() {}

float Kolo::pole(float r)
{
	float pole = 0;
	pole = 3.1416 * pow(r, 2);
	return pole;
}

float Kolo::obwod(float r)
{
	float obwod = 0;
	obwod = 2 * 3.1416 * r;
	return obwod;
}