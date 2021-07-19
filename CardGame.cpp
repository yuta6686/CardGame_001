#include "Deck.h"
#include "DeckCreateMenu.h"
#include <iostream> // getchar()


int main()
{
	Deck deck;
    DeckCreateMenu dcm(&deck);

	dcm.MainMenu();

	getchar();

	return 0;
}
