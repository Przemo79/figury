#include <iostream>
#include "trapez.h"
#include <math.h>

Trapez::Trapez() {}

Trapez::~Trapez() {}

float Trapez::pole_tp1(float a, float b, float h)
{
	float pole = 0;
	pole = ((a + b) * h) / 2;
	return pole;
}

float Trapez::pole_tp2(float a, float b, float h)
{
	float pole = 0;
	pole = ((a + b) * h) / 2;
	return pole;
}

float Trapez::pole_tp3(float a, float b, float h)
{
	float pole = 0;
	pole = ((a + b) * h) / 2;
	return pole;
}

float Trapez::obwod_tp1(float a, float b, float h)
{
	float obwod = 0;
	obwod = sqrt(pow(a - b, 2) + pow(h,2)) * 2 + a + b;
	return obwod;
}

float Trapez::obwod_tp2(float a, float b, float h)
{
	float obwod = 0;
	obwod = sqrt(pow(a - b, 2) + pow(h,2)) + h + a + b;
	return obwod;
}

float Trapez::obwod_tp3(float a, float b, float c, float d, float h)
{
	float obwod = 0;
	obwod = a + b + c + d;
	return obwod;
}