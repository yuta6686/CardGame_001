#ifndef DECK_CREATE_MENU_
#define DECK_CREATE_MENU_

class Deck;


class DeckCreateMenu
{
public:
    DeckCreateMenu() = delete; // デフォルトコンストラクタの封印?A(NEW!!)
    DeckCreateMenu(Deck* pDeck) : pDeck_(pDeck) {
	}
	
	~DeckCreateMenu() {}

	void MainMenu(void);

private:
	// CardDeckMenu() {} // デフォルトコンストラクタの封印?@
	void deleteMenu(void);
	void createMenu(void);
	void outputCardList(void) const;

private:
	Deck* pDeck_;
};

#endif // DECK_CREATE_MENU_
