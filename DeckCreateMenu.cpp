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
		cout << "デッキ構築メニュー\n";
		cout << "------------------\n";
		cout << "[1]:カードの登録\n";
		cout << "[2]:カードの削除\n";
		cout << "[3]:カードの一覧\n";
		cout << "[0]:終了\n";
		cout << endl;
		cout << "> ";

		int menu_num = 0;

		cin >> menu_num;

		switch (menu_num) {
			case 1:	createMenu();     break;
			case 2:	deleteMenu();     break;
			case 3:	outputCardList(); break;
			default: /* 終了表示を入れるならココ */ return;
		}

		cout << endl;
	}
}

void DeckCreateMenu::deleteMenu()
{
	cout << "削除するカードリスト番号を入力して下さい > ";

	int card_num;

	cin >> card_num;
	
	Card* pCard = pDeck_->GetCard(card_num);
	if (!pCard) {
		cout << "削除出来ませんでした\n";
		return;
	}

	string name = pCard->GetName();

	if (pDeck_->DeleteCard(card_num)) {
		cout << card_num << "番目のカード『" << name << "』を削除しました\n";
	}
	else {
		cout << "削除出来ませんでした\n";
	}
}

void DeckCreateMenu::createMenu()
{
	// 登録先がなくて、登録できないことをこのタイミングで伝えられないか？

    CardCreateMenu* menus[] = {
        new CardCreateMenu_Minion,
        new CardCreateMenu_Magic,
    };
    static const int MENU_COUNT = sizeof(menus) / sizeof(menus[0]);

    cout << "作成するカード情報を入力して下さい\n";
    cout << endl;

    int card_type_num = 0;

    for (;;) {
        cout << "作成するカードは [0]:ミニオンカード, [1]:マジックカード\n";
        cout << "> ";
        cin >> card_type_num;

        if (card_type_num < 0 || card_type_num >= Card::Max) {
            cout << "不正な数値です。\n";
        }
        else {
            break;
        }
    }

    menus[card_type_num]->CreateMenu();

	if (!pDeck_->AddCard(menus[card_type_num]->Create())) {
		cout << "登録出来ませんでした\n";
	}

    for (int i = 0; i < MENU_COUNT; i++) {
        delete menus[i];
    }
}

void DeckCreateMenu::outputCardList() const
{
	cout << "【カード一覧】\n";

	for (int i = 0; i < pDeck_->GetCardMax(); i++) {

		cout << "[" << i << "]:";

		Card* pCard = pDeck_->GetCard(i);

		if (!pCard) {
			cout << "未登録";
		}
		else {
			CardDisplay_DeckList cddl;
            pCard->AttachDisplay(&cddl);
            pCard->Display();
		}

		cout << endl;
	}
}


