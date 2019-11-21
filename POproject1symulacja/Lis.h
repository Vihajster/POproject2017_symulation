#pragma once
#include "Zwierze.h"

class Lis
	:public Zwierze {
public:
	Lis(Swiat & Swiat, position p);
	position wybierzPole(bool puste);

};