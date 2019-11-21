#include "Roslina.h"
#include "Swiat.h"

Roslina::Roslina(Swiat & Swiat, position p)
	:Organizm(Swiat,p)
{
	strength = 0;
	initiative = 0;
}

void Roslina::akcja()
{
	if (rand() % 6 == 0)
		rozmnazanie();
}
