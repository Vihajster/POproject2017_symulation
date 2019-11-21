#pragma once
#include <list>
#include "Position.h"

class Organizm;

class Swiat {
public:
	int wys;
	int szer;
	int tura;
	std::list<Organizm*> kolejnosc;
	char log[logsize];
	int logiter;

	Organizm *** plansza;
public:
	Swiat(int x, int y);
	
	void wykonajTure();
	void rysujSwiat();
	void dodajLog(char zn);
	void rysujLogi();
};