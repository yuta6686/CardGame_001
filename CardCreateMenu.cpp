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
	cout << "�R�X�g����͂��ĉ����� > ";
	cin >> cost_;
}


