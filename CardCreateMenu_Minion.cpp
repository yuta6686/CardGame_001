#include "CardCreateMenu_Minion.h"
#include <iostream>

using namespace std;


void CardCreateMenu_Minion::CreateMenu(void)
{
    InputName();
    InputCost();
    InputAttack();
    InputLife();
}

void CardCreateMenu_Minion::InputAttack(void)
{
    cout << "�U���͂���͂��ĉ����� > ";
    cin >> attack_;
}

void CardCreateMenu_Minion::InputLife(void)
{
    cout << "���C�t�l����͂��ĉ����� > ";
    cin >> life_;
}
