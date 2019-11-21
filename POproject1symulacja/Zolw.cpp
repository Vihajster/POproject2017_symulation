#include "Zolw.h"

Zolw::Zolw(Swiat & Swiat, position p)
	:Zwierze(Swiat, p)
{
	strength = 2;
	initiative = 1;
	symbol = 'Z';
	addToList();
}

void Zolw::akcja()
{
	if(rand()%4==0)
		kolizja(wybierzPole(false));
}

bool Zolw::odparcieAtaku(Organizm * Atakujacy)
{
	if (Atakujacy->strength < 5)	
		return true;
	else
		return false;
}
