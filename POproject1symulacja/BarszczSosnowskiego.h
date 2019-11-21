#pragma once
#include "Roslina.h"

class BarszczSosnowskiego
	:public Roslina
{
public:
	BarszczSosnowskiego(Swiat & Swiat, position p);

	void akcja();

	bool odparcieAtaku(Organizm * Atakujacy);

	void zabij();
};
