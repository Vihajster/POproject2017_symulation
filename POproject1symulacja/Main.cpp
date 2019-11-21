#pragma once
#include "Swiat.h"
#include "Gatunki.h"
#include <conio.h>
#include <string>
using namespace std;

int main()
{
	int x, y;
	cout << "Podaj szerekosc swiata: ";
	cin >> x;
	cout << endl<<"Podaj wysokosc swiata: ";
	cin >> y;
	cout << endl;

	


	srand(time(NULL));
	Swiat sswiat(x, y);
	new Czlowiek(sswiat, { rand() % x, rand() % y });

	new Antylopa(sswiat, { rand() % x, rand() % y });
	new Antylopa(sswiat, { rand() % x, rand() % y });
	new Lis(sswiat, { rand() % x, rand() % y });
	new Lis(sswiat, { rand() % x, rand() % y });
	new Owca(sswiat, { rand() % x, rand() % y });
	new Owca(sswiat, { rand() % x, rand() % y });
	new Wilk(sswiat, { rand() % x, rand() % y });
	new Wilk(sswiat, { rand() % x, rand() % y });
	new Zolw(sswiat, { rand() % x, rand() % y });
	new Zolw(sswiat, { rand() % x, rand() % y });
	new BarszczSosnowskiego(sswiat, { rand() % x, rand() % y });
	new BarszczSosnowskiego(sswiat, { rand() % x, rand() % y });
	new Guarana(sswiat, { rand() % x, rand() % y });
	new Guarana(sswiat, { rand() % x, rand() % y });
	new Mlecz(sswiat, { rand() % x, rand() % y });
	new Mlecz(sswiat, { rand() % x, rand() % y });
	new Trawa(sswiat, { rand() % x, rand() % y });
	new Trawa(sswiat, { rand() % x, rand() % y });
	new WilczeJagody(sswiat, { rand() % x, rand() % y });
	new WilczeJagody(sswiat, { rand() % x, rand() % y });


	while (1)
	{
		sswiat.wykonajTure();

	//	system("pause");
	}
}