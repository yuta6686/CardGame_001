#include "Deck.h"
#include "Card.h"


Deck::Deck()
{
	for (int i = 0; i < CARD_MAX_; i++) {
		cards_[i] = nullptr; // NULL
	}
}

Deck::~Deck()
{
	for (int i = 0; i < CARD_MAX_; i++) {
		DeleteCard(i);
	}
}

bool Deck::AddCard(Card * pCard)
{
	for (int i = 0; i < CARD_MAX_; i++) {
		if (!cards_[i]) {
            cards_[i] = pCard;
			return true;
		}
	}

	// ‘S•”–„‚Ü‚Á‚Ä‚½
	return false;
}

bool Deck::DeleteCard(int index)
{
	// ”z—ñ”ÍˆÍŠO‚¾‚Á‚½‚çfalse
	if (index < 0 || index >= CARD_MAX_) {
		return false;
	}

	// “o˜^‚³‚ê‚Ä‚¢‚È‚¢êŠ‚ğíœ‚µ‚æ‚¤‚Æ‚µ‚½
	if (!cards_[index]) {
		return false;
	}

	delete cards_[index];
    cards_[index] = nullptr;

	// –³–íœ‚Å‚«‚Ü‚µ‚½
	return true;
}

Card * Deck::GetCard(int index)
{
	if (index < 0 || index >= CARD_MAX_) {
		return nullptr;
	}

	return cards_[index];
}
