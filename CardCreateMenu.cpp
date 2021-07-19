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
	while (true) {
		cout << "コストを入力してください　>" << endl;
		string s;

		cin >> s;

		int num = atoi(s.c_str());

		cout << num << endl;

		if (num<=10000) {
			cost_ = num;
			return;
		}
		cout << "10000以下でちゃんと記入してください" << endl;
	}
	return;
}


