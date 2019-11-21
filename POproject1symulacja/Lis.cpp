#include "Lis.h"
#include "Swiat.h"

Lis::Lis(Swiat & Swiat, position p)
	:Zwierze(Swiat, p)
{
	strength = 3;
	initiative = 7;
	symbol = 'L';
	addToList();
}

position Lis::wybierzPole(bool puste)
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
				if (swiat.plansza[test[i].x][test[i].y] == nullptr || swiat.plansza[test[i].x][test[i].y]->strength <= strength)
				{
					sasiednie[ls] = test[i];
					ls++;
				}
			}
		}
	}

	if (ls > 0)
		return sasiednie[rand() % ls];
	else
		return{ -1,-1 };
}