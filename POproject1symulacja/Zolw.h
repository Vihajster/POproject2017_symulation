#pragma once
#include "Zwierze.h"

class Zolw
	:public Zwierze {
public:
	Zolw(Swiat & Swiat, position p);
	void akcja();
	bool odparcieAtaku(Organizm * Atakujacy);
};