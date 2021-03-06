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

	// 全部埋まってた
	return false;
}

bool Deck::DeleteCard(int index)
{
	// 配列範囲外だったらfalse
	if (index < 0 || index >= CARD_MAX_) {
		return false;
	}

	// 登録されていない場所を削除しようとした
	if (!cards_[index]) {
		return false;
	}

	delete cards_[index];
    cards_[index] = nullptr;

	// 無事削除できました
	return true;
}

Card * Deck::GetCard(int index)
{
	if (index < 0 || index >= CARD_MAX_) {
		return nullptr;
	}

	return cards_[index];
}
