#include "DeckCreateMenu.h"

#include "Deck.h"
#include "CardCreateMenu_Minion.h"
#include "CardCreateMenu_Magic.h"
#include "CardDisplay_DeckList.h"
#include <iostream>
#include <string>


using namespace std;


void DeckCreateMenu::MainMenu()
{
	// for (;;) {
	while(true) {
		cout << "------------------\n";
		cout << "�f�b�L�\�z���j���[\n";
		cout << "------------------\n";
		cout << "[1]:�J�[�h�̓o�^\n";
		cout << "[2]:�J�[�h�̍폜\n";
		cout << "[3]:�J�[�h�̈ꗗ\n";
		cout << "[0]:�I��\n";
		cout << endl;
		cout << "> ";

		int menu_num = 0;

		cin >> menu_num;

		switch (menu_num) {
			case 1:	createMenu();     break;
			case 2:	deleteMenu();     break;
			case 3:	outputCardList(); break;
			default: /* �I���\��������Ȃ�R�R */ return;
		}

		cout << endl;
	}
}

void DeckCreateMenu::deleteMenu()
{
	cout << "�폜����J�[�h���X�g�ԍ�����͂��ĉ����� > ";

	int card_num;

	cin >> card_num;
	
	Card* pCard = pDeck_->GetCard(card_num);
	if (!pCard) {
		cout << "�폜�o���܂���ł���\n";
		return;
	}

	string name = pCard->GetName();

	if (pDeck_->DeleteCard(card_num)) {
		cout << card_num << "�Ԗڂ̃J�[�h�w" << name << "�x���폜���܂���\n";
	}
	else {
		cout << "�폜�o���܂���ł���\n";
	}
}

void DeckCreateMenu::createMenu()
{
	// �o�^�悪�Ȃ��āA�o�^�ł��Ȃ����Ƃ����̃^�C�~���O�œ`�����Ȃ����H

    CardCreateMenu* menus[] = {
        new CardCreateMenu_Minion,
        new CardCreateMenu_Magic,
    };
    static const int MENU_COUNT = sizeof(menus) / sizeof(menus[0]);

    cout << "�쐬����J�[�h������͂��ĉ�����\n";
    cout << endl;

    int card_type_num = 0;

    for (;;) {
        cout << "�쐬����J�[�h�� [0]:�~�j�I���J�[�h, [1]:�}�W�b�N�J�[�h\n";
        cout << "> ";
        cin >> card_type_num;

        if (card_type_num < 0 || card_type_num >= Card::Max) {
            cout << "�s���Ȑ��l�ł��B\n";
        }
        else {
            break;
        }
    }

    menus[card_type_num]->CreateMenu();

	if (!pDeck_->AddCard(menus[card_type_num]->Create())) {
		cout << "�o�^�o���܂���ł���\n";
	}

    for (int i = 0; i < MENU_COUNT; i++) {
        delete menus[i];
    }
}

void DeckCreateMenu::outputCardList() const
{
	cout << "�y�J�[�h�ꗗ�z\n";

	for (int i = 0; i < pDeck_->GetCardMax(); i++) {

		cout << "[" << i << "]:";

		Card* pCard = pDeck_->GetCard(i);

		if (!pCard) {
			cout << "���o�^";
		}
		else {
			CardDisplay_DeckList cddl;
            pCard->AttachDisplay(&cddl);
            pCard->Display();
		}

		cout << endl;
	}
}


