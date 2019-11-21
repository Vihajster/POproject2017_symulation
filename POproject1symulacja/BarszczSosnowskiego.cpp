#include "BarszczSosnowskiego.h"
#include"Swiat.h"

BarszczSosnowskiego::BarszczSosnowskiego(Swiat & Swiat, position p)
	:Roslina(Swiat, p)
{
	strength = 10;
	symbol = 'b';
	addToList();
}

void BarszczSosnowskiego::akcja()
{
	zabij();
	if (rand() % 6 == 0)
		rozmnazanie();
}

bool BarszczSosnowskiego::odparcieAtaku(Organizm * Atakujacy)
{
	kill();
	Atakujacy->kill();

	return true;
}

void BarszczSosnowskiego::zabij()
{
	position test[4] = {
		{ pos.x - 1,pos.y },{ pos.x,pos.y - 1 },
		{ pos.x + 1,pos.y },{ pos.x,pos.y + 1 }
	};

	for (int i = 0; i < 4; i++)
		if (test[i].x >= 0 && test[i].y >= 0 && test[i].x < swiat.szer && test[i].y < swiat.wys)
			if (swiat.plansza[test[i].x][test[i].y] != nullptr)
				if (swiat.plansza[test[i].x][test[i].y]->initiative != 0)
				{
					swiat.dodajLog(symbol);
					swiat.dodajLog('k');
					swiat.dodajLog(swiat.plansza[test[i].x][test[i].y]->symbol);
					swiat.dodajLog('q');
					swiat.plansza[test[i].x][test[i].y]->kill();
				}
}
