#pragma once
#include "Position.h"


class Swiat;

class Organizm {
public:
	int strength;
	int initiative;
	position pos;
	int age;
	Swiat &swiat;
	char symbol;
	bool allive;

public:
	Organizm(Swiat & Swiat,position p);
	
	virtual void akcja();

	virtual void kolizja(position p);

	virtual void rysowanie();

	virtual position wybierzPole(bool puste);

	virtual bool odparcieAtaku(Organizm * Atakujacy);

	virtual void rozmnazanie();


	virtual void addToList();

	virtual void kill();

	virtual int getStrength();
	
	virtual void setPosition(position p);

	virtual void setStrength(int s);

	virtual void setAllive(bool f);

	virtual ~Organizm();
	

	
};