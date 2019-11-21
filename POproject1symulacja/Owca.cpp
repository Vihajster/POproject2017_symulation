#include "Owca.h"

Owca::Owca(Swiat & Swiat, position p)
	:Zwierze(Swiat, p)
{
	strength = 4;
	initiative = 4;
	symbol = 'O';
	addToList();
}
