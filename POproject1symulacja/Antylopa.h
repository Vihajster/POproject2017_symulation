#pragma once

#include "Zwierze.h"

class Antylopa
	:public Zwierze {
public:
	Antylopa(Swiat & Swiat, position p);
	void akcja();
	bool odparcieAtaku(Organizm * Atakujacy);
};