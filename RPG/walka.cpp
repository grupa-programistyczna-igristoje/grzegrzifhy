#include <iostream>
#include <time.h>
#include <cstdio>

using namespace std;

unsigned int szansa;

int zycie_hero = 4;
int obrazenia_hero = 2;
unsigned int blok_hero = 5;						//dla różnych postaci możesz dac sobie różny startowy blok, to samo atak i HP
int szansa_hero;

int zycie_enemy = 3;
int obrazenia_enemy = 1;
unsigned int blok_enemy = 3;
int szansa_enemy;


void walka()
{
	srand(time(NULL));

	szansa_hero = rand() % 99 + 1;							//zmieniasz sznasy na blok 

	for(;;)
	{
		if (szansa_hero <= blok_hero)
		{
			cout << "Sparowales uderzenie!" << endl;
			getchar();
		}

		else if (szansa_hero > blok_hero)
		{
			cout << "Otrzymales " << obrazenia_enemy << " obrazen!" << endl;
			zycie_hero = zycie_hero - obrazenia_enemy;
			getchar();
		}

		
		
		if (zycie_hero <= 0)
		{
			cout << "Zginales!" << endl;
		}


		
		
		srand(time(NULL));

		szansa_enemy = rand() % 99 + 1;

		if (szansa_enemy <= blok_enemy)
		{
			cout << "Przeciwnik odbil twoj cios!" << endl;
			getchar();
		}


		else if (szansa_enemy > blok_enemy)
		{
			cout << "Zadales " << obrazenia_hero << " obrazen!" << endl;
			zycie_enemy = zycie_enemy - obrazenia_hero;
			getchar();
		}
		
		
		if (zycie_enemy <= 0)
		{
			cout << "Twoj przeciwnik nie zyje!" << endl;
		}
	}
}

	
	
int main()
{
	walka();
}
