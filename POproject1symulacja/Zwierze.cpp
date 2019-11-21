#include "Zwierze.h"
#include "Swiat.h"



Zwierze::Zwierze(Swiat & Swiat, position p)
	:Organizm(Swiat, p) 
{
}

void Zwierze::akcja()
{
	kolizja(wybierzPole(false));
}

void Zwierze::kolizja(position p)
{
	if (swiat.tura != age)
	{
		if (swiat.plansza[p.x][p.y] == nullptr)
			ruch(p);

		else if (swiat.plansza[p.x][p.y]->symbol == this->symbol)
			rozmnazanie();
		else
			atak(p);
	}
}

void Zwierze::ruch(position p)
{
	if (p.x >= 0)
	{
		swiat.plansza[pos.x][pos.y] = nullptr;
		pos = p;
		swiat.plansza[pos.x][pos.y] = this;
	}
}

void Zwierze::atak(position p)
{
	swiat.dodajLog(symbol);
	swiat.dodajLog('a');
	swiat.dodajLog(swiat.plansza[p.x][p.y]->symbol);
	if(swiat.plansza[p.x][p.y]->odparcieAtaku(this)==false)
		if (swiat.plansza[p.x][p.y]->strength > strength)
		{
			kill();
			
			swiat.dodajLog('p');
		}
		else
		{					
			swiat.dodajLog('z');
			swiat.plansza[p.x][p.y]->kill();
			ruch(p);
		}
	else
	{
		
		swiat.dodajLog('n');
	}
}


