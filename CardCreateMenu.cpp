#include "CardCreateMenu.h"
#include "Card.h"
#include <iostream>

using namespace std; // std::���ȗ��o���� ��.h�ł͎g��Ȃ���


CardCreateMenu::CardCreateMenu()
	: name_("Unknown"), cost_(0)
{
}

void CardCreateMenu::InputName(void)
{
	cout << "�J�[�h������͂��ĉ����� > ";
	cin >> name_;
}

void CardCreateMenu::InputCost(void)
{
	while (true) {
		cout << "�R�X�g����͂��Ă��������@>" << endl;
		string s;

		cin >> s;

		int num = atoi(s.c_str());

		cout << num << endl;

		if (num<=10000) {
			cost_ = num;
			return;
		}
		cout << "10000�ȉ��ł����ƋL�����Ă�������" << endl;
	}
	return;
}


