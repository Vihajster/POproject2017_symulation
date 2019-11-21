#pragma once
#include "Zwierze.h"

class Czlowiek
	:public Zwierze {
public:
	Czlowiek(Swiat & Swiat, position p);
	//void akcja();
	//bool odparcieAtaku(Organizm * Atakujacy);
	position wybierzPole(bool puste);

};