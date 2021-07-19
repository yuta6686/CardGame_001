#include "CardDisplay_DeckList.h"
#include "Card_Minion.h"
#include "Card_Magic.h"
#include <iostream>


using namespace std;


void CardDisplay_DeckList::Display(const Card_Minion * pCard) const
{
    cout << "kƒJ[ƒh–¼l:" << pCard->GetName();
    cout << " kƒRƒXƒgl:" << pCard->GetCost();
    cout << " kƒ‰ƒCƒtl:" << pCard->GetLife();
    cout << " kUŒ‚—Íl:" << pCard->GetAttack();
}

void CardDisplay_DeckList::Display(const Card_Magic * pCard) const
{
    cout << "kƒJ[ƒh–¼l:" << pCard->GetName();
    cout << " kƒRƒXƒgl:" << pCard->GetCost();
}
