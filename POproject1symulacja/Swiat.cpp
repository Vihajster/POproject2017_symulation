#include "Swiat.h"
#include "Organizm.h"
#include "Position.h"

Swiat::Swiat(int x, int y)
{
	szer = x;
	wys = y;
	tura = 0;
	plansza = new Organizm**[x];
	logiter = 0;
	for (int i = 0; i < x; i++)	
		plansza[i] = new Organizm*[y];	

	for (int i = 0; i < szer; i++)	
		for (int j = 0; j < wys; j++)		
			plansza[i][j] = nullptr;

		
	for(int i=0;i<logsize;i++)
		log[i] = NULL;
}

void Swiat::wykonajTure()
{
	rysujSwiat();
	int i = 0;
	for (list<Organizm*>::iterator iter = kolejnosc.begin(); iter != kolejnosc.end(); iter++)
	{
		if ((*iter)->allive == true)
		{

			(*iter)->akcja();
				//cout << (*iter)->symbol << "  " << (*iter)->initiative << "  " << (*iter)->age << " "<< (*iter)->pos.x<<" "<<" " << (*iter)->pos.y<<endl;
		}		
		i++;
	}
	kolejnosc.remove_if([](Organizm*n) {return n->allive == false; });

	tura++;
}
void Swiat::rysujSwiat()
{
	system("cls");
	for (int i = 0; i < wys; i++)
	{
		for (int j = 0; j < szer; j++)
		{
			if (plansza[j][i] == nullptr)
				cout << ".";
			else
				cout << plansza[j][i]->symbol;
		}
		cout << endl;
	}
	cout << "Tura nr "<<tura << endl;;
	rysujLogi();
}
void Swiat::dodajLog(char zn)
{
	if (logiter < logsize) {
		log[logiter] = zn;
		logiter++;
	}
}
void Swiat::rysujLogi()
{

	for (int i = 0; log[i] != NULL; i++)
	{
		switch (log[i])
		{
		case 'C': cout << "Czlowiek ";	break;
		case 'A': cout << "Antylopa ";	break;
		case 'L': cout << "Lis ";		break;
		case 'O':cout << "Owca ";		break;
		case 'W': cout << "Wilk ";		break;
		case 'Z': cout << "Zolw ";		break;
		case 'b': cout << "BarszczSosnowskiego "; break;
		case 'g': cout << "Guarana ";		 break;
		case 'm':cout << "Mlecz ";			 break;
		case 't': cout << "Trawa ";		 break;
		case 'j': cout << "WilczeJagody ";		 break;

		case 'a':cout << "atakuje "; break;
		case 'z':cout << "z powodzeniem.\n"; break;
		case 'n':cout << "z nie powodzeniem.\n"; break;
		case 'r':cout << "rozmanza sie.\n"; break;
		case 'k':cout << "zabija "; break;
		case 'p':cout << "i ginie.\n"; break;
		case 'q':cout << ".\n"; break;

		}
	}
	for (int i = 0; log[i] != NULL; i++)
		log[i] = NULL;
	logiter = 0;

}