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
	while (true) {
		cout << "�U���͂���͂��ĉ����� > ";
		string s;

		cin >> s;

		int num = atoi(s.c_str());

		cout << num << endl;

		if (num <= 10000) {
			attack_ = num;
			return;
		}
		cout << "10000�ȉ��ł����ƋL�����Ă�������" << endl;
	}
	return;
   
}

void CardCreateMenu_Minion::InputLife(void)
{
	while (true) {
		cout << "���C�t�l����͂��ĉ����� > ";
		string s;

		cin >> s;

		int num = atoi(s.c_str());

		cout << num << endl;

		if (num <= 10000) {
			life_ = num;
			return;
		}
		cout << "10000�ȉ��ł����ƋL�����Ă�������" << endl;
	}
	return;
   
    
}
