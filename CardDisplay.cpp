#include "CardDisplay.h"
#include "Card_Minion.h"
#include "Card_Magic.h"
#include <iostream>

using namespace std;


void CardDisplay::Display(const Card_Minion * pCard) const
{
    cout << "�k�J�[�h���l:" << pCard->GetName();
    cout << " �k�R�X�g�l:" << pCard->GetCost();
    cout << " �k���C�t�l:" << pCard->GetLife();
    cout << " �k�U���́l:" << pCard->GetAttack();
}


void CardDisplay::Display(const Card_Magic * pCard) const
{
    cout << "�k�J�[�h���l:" << pCard->GetName();
    cout << " �k�R�X�g�l:" << pCard->GetCost();
}
