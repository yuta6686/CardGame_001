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
    cout << "UŒ‚—Í‚ð“ü—Í‚µ‚Ä‰º‚³‚¢ > ";
    cin >> attack_;
}

void CardCreateMenu_Minion::InputLife(void)
{
    cout << "ƒ‰ƒCƒt’l‚ð“ü—Í‚µ‚Ä‰º‚³‚¢ > ";
    cin >> life_;
}
