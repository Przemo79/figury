#pragma once
class Trojkat
{
public:
	Trojkat();
	~Trojkat();

	float pole_t1(float bok_a, float wysokosc);
	float pole_t2(float bok_a, float wysokosc);
	float pole_t3(float bok_a, float wysokosc);
	
	float obwod_t1(float bok_a, float wysokosc);
	float obwod_t2(float bok_a, float wysokosc);
	float obwod_t3(float bok_a, float bok_b, float bok_c);


};