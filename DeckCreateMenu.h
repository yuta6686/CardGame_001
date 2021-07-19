#ifndef DECK_CREATE_MENU_
#define DECK_CREATE_MENU_

class Deck;


class DeckCreateMenu
{
public:
    DeckCreateMenu() = delete; // �f�t�H���g�R���X�g���N�^�̕���A(NEW!!)
    DeckCreateMenu(Deck* pDeck) : pDeck_(pDeck) {
	}
	
	~DeckCreateMenu() {}

	void MainMenu(void);

private:
	// CardDeckMenu() {} // �f�t�H���g�R���X�g���N�^�̕���@
	void deleteMenu(void);
	void createMenu(void);
	void outputCardList(void) const;

private:
	Deck* pDeck_;
};

#endif // DECK_CREATE_MENU_
