#include "WilczeJagody.h"

WilczeJagody::WilczeJagody(Swiat & Swiat, position p)
	:Roslina(Swiat, p)
{
	strength = 99;
	symbol = 'j';
	addToList();
}

bool WilczeJagody::odparcieAtaku(Organizm * Atakujacy)
{
	kill();
	Atakujacy->kill();
	return true;
}
