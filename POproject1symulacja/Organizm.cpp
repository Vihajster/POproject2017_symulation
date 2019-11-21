#include "Organizm.h"
#include "Swiat.h"
#include "Gatunki.h"

Organizm::Organizm(Swiat & Swiat,position p)
	:swiat(Swiat)
{
	pos = p;
	age = swiat.tura;
	swiat.plansza[p.x][p.y]=this;
	allive = true;
}

void Organizm::akcja()
{	
}

void Organizm::kolizja(position p)
{
}

void Organizm::rysowanie()
{
	cout << symbol;
}

position Organizm::wybierzPole(bool puste)
{
	position sasiednie[4];
	int ls = 0;
	position test[4] = {
		{ pos.x - 1,pos.y }, { pos.x,pos.y - 1 },
		{ pos.x + 1,pos.y }, { pos.x,pos.y + 1 }
	};


	for (int i = 0; i < 4; i++)
	{
		if (test[i].x >= 0 && test[i].y >= 0 && test[i].x < swiat.szer && test[i].y < swiat.wys)
		{
			if (puste)
			{
				if (swiat.plansza[test[i].x][test[i].y] == nullptr)
				{
					sasiednie[ls] = test[i];
					ls++;
				}
			}
			else
			{
				sasiednie[ls] = test[i];
				ls++;
			}
		}
	}

	if (ls > 0)
		return sasiednie[rand() % ls];
	else
		return{ -1,-1 };
}

bool Organizm::odparcieAtaku(Organizm * Atakujacy)
{
	return false;
}

void Organizm::rozmnazanie()
{
	position p = wybierzPole(true);
	if (p.x >= 0)
	{
		switch (symbol)
		{
		case 'A': new Antylopa(swiat, p);	break;
		case 'L': new Lis(swiat, p);		break;
		case 'O': new Owca(swiat, p);		break;
		case 'W': new Wilk(swiat, p);		break;
		case 'Z': new Zolw(swiat, p);		break;

		case 'b': new BarszczSosnowskiego(swiat, p); break;
		case 'g': new Guarana(swiat, p);			 break;
		case 'm': new Mlecz(swiat, p);				 break;
		case 't': new Trawa(swiat, p);				 break;
		case 'j': new WilczeJagody(swiat, p);		 break;
		}
		swiat.dodajLog(symbol);
		swiat.dodajLog('r');
	}
}


void Organizm::addToList()
{
	list<Organizm*>::iterator iter = swiat.kolejnosc.begin();
	for (; iter != swiat.kolejnosc.end(); iter++)
	{
		if ((*iter)->initiative < this->initiative)
		{
			//system("pause");
			break;
		}
	}
	swiat.kolejnosc.insert(iter, this);
}

void Organizm::kill()
{
	setAllive(false);
	swiat.plansza[pos.x][pos.y] = nullptr;
}

int Organizm::getStrength()
{
	return strength;
}

void Organizm::setPosition(position p)
{
	pos = p;
}

void Organizm::setStrength(int s)
{
	strength = s;
}

void Organizm::setAllive(bool f)
{
	allive = f;
}

Organizm::~Organizm()
{
}
