#pragma once
class Trapez
{
public:
	Trapez();
	~Trapez();

	float pole_tp1(float bok_a, float bok_b, float wysokosc);
	float pole_tp2(float bok_a, float bok_b, float wysokosc);
	float pole_tp3(float bok_a, float bok_b, float wysokosc);

	float obwod_tp1(float bok_a, float bok_b, float wysokosc);
	float obwod_tp2(float bok_a, float bok_b, float wysokosc);
	float obwod_tp3(float bok_a, float bok_b, float bok_c, float bok_d, float wysokosc);


};
