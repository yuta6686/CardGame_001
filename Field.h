#pragma once

class Card;

class Field {
public:
	Field();

//　 場にカードを置く
	bool PutCard(Card* pCard);            

//  バカラカードを取り除く
	Card* RemoveCard(int index);          

//  カード情報表示などに使う
	Card* GetCard(int index) ; 

	int GetCardCount() { return card_count_; }
private:
	static const int MAX_CARD_ = 5;
	int card_count_ = 0;
	Card* pCards_[MAX_CARD_];
};
