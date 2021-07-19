#include "Deck.h"
#include "DeckCreateMenu.h"
#include <iostream> 
#include <time.h>
#include <cstdlib>


int main()
{
	srand((unsigned int)time(NULL));

	Deck deck;
    DeckCreateMenu dcm(&deck);

	dcm.MainMenu();

	getchar();

	return 0;
}
