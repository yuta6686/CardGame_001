#include "CardHand.h"
#include "Card.h"


CardHand::CardHand()
{
	for (int i = 0; i < MAX_CARD_; i++) {
		pCards_[i] = nullptr;
	}
}

bool CardHand::AddCard(Card * pCard)
{
	if (card_count_ >= MAX_CARD_) {
		return false;
	}

	pCards_[card_count_++] = pCard;

	return true;
}

Card * CardHand::PutOutCard(int index)
{
	if (index < 0 || index >= MAX_CARD_) {
		return nullptr;
	}

    Card* pReturnCard = pCards_[index];

    pCards_[index] = pCards_[card_count_];

    pCards_[card_count_--] = nullptr;

	return pReturnCard;
}

const Card * CardHand::GetCard(int index) const
{
    if (index < 0 || index >= MAX_CARD_) {
        return nullptr;
    }

	return  pCards_[index];
}
