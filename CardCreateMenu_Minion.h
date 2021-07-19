#ifndef CARD_CREATE_MENU_MINION_H_
#define CARD_CREATE_MENU_MINION_H_


#include "CardCreateMenu.h"
#include "Card_Minion.h"
#include <string>


class CardCreateMenu_Minion : public CardCreateMenu
{
public:
    CardCreateMenu_Minion() : attack_(0), life_(0) {}

    Card* Create(void) override {
        return new Card_Minion(GetName(), GetCost(), attack_, life_);
    }

    void CreateMenu(void) override;

private:
    void InputAttack(void);
    void InputLife(void);

private:
    int attack_;
    int life_;
};

#endif // CARD_CREATE_MENU_MINION_H_
