#pragma once
#include "Roslina.h"

class WilczeJagody
	:public Roslina
{
public:
	WilczeJagody(Swiat & Swiat, position p);

	bool odparcieAtaku(Organizm * Atakujacy);

};
