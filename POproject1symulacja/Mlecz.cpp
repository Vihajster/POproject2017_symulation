#include "Mlecz.h"

Mlecz::Mlecz(Swiat & Swiat, position p)
	:Roslina(Swiat, p)
{
	symbol = 'm';
	addToList();
}

void Mlecz::akcja()
{
	for (int i = 0; i < 3; i++)
	{
		if (rand() % 20 == 0)
			rozmnazanie();
	}
}
