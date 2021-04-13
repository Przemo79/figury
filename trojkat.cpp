#include <iostream>
#include "Trojkat.h"
#include <math.h>

Trojkat::Trojkat() {}

Trojkat::~Trojkat() {}

float Trojkat::pole_t1(float a, float h)
{
	float pole = 0;
	pole = (a * h) / 2;
	return pole;
}

float Trojkat::pole_t2(float a, float h)
{
	float pole = 0;
	pole = (a * h) / 2;
	return pole;
}

float Trojkat::pole_t3(float a, float h)
{
	float pole = 0;
	pole = (a * h) / 2;
	return pole;
}

float Trojkat::obwod_t1(float a, float h)
{
	float obwod = 0;
	obwod = (sqrt(a + pow(h,2))) * 2 + a;
	return obwod;
}

float Trojkat::obwod_t2(float a, float h)
{
	float obwod = 0;
	obwod = sqrt(pow(a, 2) + pow(h, 2)) + a + h;
	return obwod;
}

float Trojkat::obwod_t3(float a, float b, float c)
{
	float obwod = 0;
	obwod = a+b+c;
	return obwod;
}