#pragma once
#include "Organizm.h"

class Zwierze
	:public Organizm {
public:
	Zwierze(Swiat & Swiat, position p);

	void akcja();
	void kolizja(position p);
	void ruch(position p);
	void atak(position p);

	
};