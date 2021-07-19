#ifndef CARD_DISPLAY_DECK_LIST_H_
#define CARD_DISPLAY_DECK_LIST_H_


#include "CardDisplay.h"


class CardDisplay_DeckList : public CardDisplay
{
public:
    virtual void Display(const Card_Minion* pCard) const override;
    virtual void Display(const Card_Magic* pCard) const override;
};

#endif // CARD_DISPLAY_DECK_LIST_H_
