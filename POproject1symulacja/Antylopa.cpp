#include "Antylopa.h"

Antylopa::Antylopa(Swiat & Swiat, position p)
	:Zwierze(Swiat, p)
{
	strength = 4;
	initiative = 4;
	symbol = 'A';
	addToList();
}

void Antylopa::akcja()
{
	for(int i=0;i<(rand() % 2)+1;i++)
		kolizja(wybierzPole(false));
}

bool Antylopa::odparcieAtaku(Organizm * Atakujacy)
{
	if (rand() % 2)
	{
		ruch(wybierzPole(true));
		return true;
	}
	else
		return false;
}
