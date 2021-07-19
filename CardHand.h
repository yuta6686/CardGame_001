#ifndef CARD_HAND_H_
#define CARD_HAND_H_


class Card; // �O���錾

class CardHand
{
public:
	CardHand();
	~CardHand() {}

//  ��D�ɃJ�[�h��������
	bool AddCard(Card* pCard);            

//  ��D����J�[�h�����o��
	Card* PutOutCard(int index);          

//  �J�[�h���\���ȂǂɎg��
	const Card* GetCard(int index) const;

//	�Q�b�^�[
	int GetCardCount() const { return card_count_; }

private:
	static const int MAX_CARD_ = 5;
	int card_count_ = 0;
	Card* pCards_[MAX_CARD_];
};

#endif // CARD_HAND_H_
