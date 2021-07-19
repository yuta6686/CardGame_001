#ifndef CARD_HAND_H_
#define CARD_HAND_H_


class Card; // �O���錾

class CardHand
{
public:
	CardHand();
	~CardHand() {}

	bool AddCard(Card* pCard);            // ��D�ɃJ�[�h��������
	Card* PutOutCard(int index);          // ��D����J�[�h�����o��
	const Card* GetCard(int index) const; // �J�[�h���\���ȂǂɎg��

private:
	static const int MAX_CARD_ = 5;
	int card_count_ = 0;
	Card* pCards_[MAX_CARD_];
};

#endif // CARD_HAND_H_
