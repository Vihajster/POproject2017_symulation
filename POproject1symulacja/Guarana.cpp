#include "Guarana.h"

Guarana::Guarana(Swiat & Swiat, position p)
	:Roslina(Swiat, p)
{
	symbol = 'g';
	addToList();
}

bool Guarana::odparcieAtaku(Organizm * Atakujacy)
{
	Atakujacy->setStrength(Atakujacy->getStrength() + 3);
	return false;
}
