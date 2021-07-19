#ifndef CARD_CREATE_MENU_MAGIC_H_
#define CARD_CREATE_MENU_MAGIC_H_

#include "CardCreateMenu.h"
#include "Card_Magic.h"


class CardCreateMenu_Magic : public CardCreateMenu
{
public:
    Card* Create(void) override {
        return new Card_Magic(Card::Magic, GetName(), GetCost());
    }

    void CreateMenu(void) override;
};

#endif // CARD_CREATE_MENU_MAGIC_H_
