#pragma once
#include "Roslina.h"

class Guarana
	:public Roslina
{
public:
	Guarana(Swiat & Swiat, position p);

	bool odparcieAtaku(Organizm * Atakujacy);
};
