#pragma once

class Card;

class Field {
public:
	Field();

//�@ ��ɃJ�[�h��u��
	bool PutCard(Card* pCard);            

//  �o�J���J�[�h����菜��
	Card* RemoveCard(int index);          

//  �J�[�h���\���ȂǂɎg��
	Card* GetCard(int index) ; 

	int GetCardCount() { return card_count_; }
private:
	static const int MAX_CARD_ = 5;
	int card_count_ = 0;
	Card* pCards_[MAX_CARD_];
};
