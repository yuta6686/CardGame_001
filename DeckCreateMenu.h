#ifndef DECK_CREATE_MENU_
#define DECK_CREATE_MENU_

class Deck;


class DeckCreateMenu
{
public:
    DeckCreateMenu() = delete; // デフォルトコンストラクタの封印②(NEW!!)
    DeckCreateMenu(Deck* pDeck) : pDeck_(pDeck) {
	}
	
	~DeckCreateMenu() {}

	void MainMenu(void);

private:
	// CardDeckMenu() {} // デフォルトコンストラクタの封印①
	void deleteMenu(void);
	void createMenu(void);
	void outputCardList(void) const;

private:
	Deck* pDeck_;
};

#endif // DECK_CREATE_MENU_
