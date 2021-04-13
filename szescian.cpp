#include <iostream>
#include <math.h>
#include "szescian.h"

Szescian::Szescian() {}

Szescian::~Szescian() {}

float Szescian::pole(float a)
{
	float pole = 0;
	pole = pow(a, 2) * 6;
	return pole;
}

float Szescian::obwod(float a)
{
	float obwod = 0;
	obwod = a * 12;
	return obwod;
}

float Szescian::objetosc(float a)
{
	float objetosc = 0;
	objetosc = pow(a, 3);
	return objetosc;
}