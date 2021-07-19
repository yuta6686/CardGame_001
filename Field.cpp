#include "Field.h"

Field::Field()
{
	for (int i = 0; i < MAX_CARD_; i++) {
		pCards_[i] = nullptr;
	}
}

bool Field::PutCard(Card* pCard)
{
	if(card_count_>=MAX_CARD_)
		return false;

	pCards_[card_count_++] = pCard;
	return true;
}

Card* Field::RemoveCard(int index)
{
	if (index < 0 || index >= MAX_CARD_)
		return nullptr;

	Card* pReturnCard = pCards_[index];

	pCards_[index] = pCards_[card_count_];
	pCards_[card_count_--] = nullptr;

	return pReturnCard;
}

const Card* Field::GetCard(int index) 
{
	if (index < 0 || index >= MAX_CARD_)
		return nullptr;

	return pCards_[index];
}
