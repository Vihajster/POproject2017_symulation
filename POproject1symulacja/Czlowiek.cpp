#include "Czlowiek.h"
#include<conio.h>

Czlowiek::Czlowiek(Swiat & Swiat, position p)
	:Zwierze(Swiat, p)
{
	strength = 5;
	initiative = 4;
	symbol = 'C';
	addToList();
}



position Czlowiek::wybierzPole(bool puste)
{
	position sasiednie=pos;
	int zn;
	zn =_getch();
	switch (zn)
	{
	case 224:
		zn =_getch();
		switch (zn)
		{
		case 72: sasiednie.y--;		break;
		case 80: sasiednie.y++;		break;
		case 75: sasiednie.x--;		break;
		case 77: sasiednie.x++;		break;
		}	break;
	}
	return sasiednie;
}
