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
    cout << "攻撃力を入力して下さい > ";
    cin >> attack_;
}

void CardCreateMenu_Minion::InputLife(void)
{
    cout << "ライフ値を入力して下さい > ";
    cin >> life_;
}
