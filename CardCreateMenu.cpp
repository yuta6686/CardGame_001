#include "CardCreateMenu.h"
#include "Card.h"
#include <iostream>

using namespace std; // std::を省略出来る ※.hでは使わないで


CardCreateMenu::CardCreateMenu()
	: name_("Unknown"), cost_(0)
{
}

void CardCreateMenu::InputName(void)
{
	cout << "カード名を入力して下さい > ";
	cin >> name_;
}

void CardCreateMenu::InputCost(void)
{
	cout << "コストを入力して下さい > ";
	cin >> cost_;
}


