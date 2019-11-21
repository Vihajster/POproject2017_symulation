#include "Wilk.h"

Wilk::Wilk(Swiat & Swiat, position p)
	:Zwierze(Swiat,p)
{
	strength = 9;
	initiative = 5;
	symbol = 'W';
	addToList();
}
