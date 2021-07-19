#pragma once
class Deck;
class CardHand;
class Field;

class Player {
public:
	Player(Deck* pDeck,CardHand* pCardHand,Field* pField):
		pDeck_(pDeck),pCardHand_(pCardHand),pField_(pField){}

	Deck* GetDeck(void) { return pDeck_; }
	CardHand* GetCardHand(void) { return pCardHand_; }
	Field* GetField(void) { return pField_; }

private:
	int hp_ = 10;
	Deck* pDeck_;
	CardHand* pCardHand_;
	Field* pField_;
};