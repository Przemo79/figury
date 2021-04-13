#include <iostream>
#include "romb.h"

Romb::Romb() {}

Romb::~Romb() {}

float Romb::pole_r1(float a, float h)
{
	float pole = 0;
	pole = a*h;
	return pole;
}

float Romb::pole_r2(float a, float h)
{
	float pole = 0;
	pole = a*h;
	return pole;
}

float Romb::obwod_r1(float a, float b)
{
	float obwod = 0;
	obwod = 2*a + 2*b;
	return obwod;
}

float Romb::obwod_r2(float a)
{
	float obwod = 0;
	obwod = 4*a;
	return obwod;
}