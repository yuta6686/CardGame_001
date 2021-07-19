#ifndef CARD_HAND_H_
#define CARD_HAND_H_


class Card; // 前方宣言

class CardHand
{
public:
	CardHand();
	~CardHand() {}

	bool AddCard(Card* pCard);            // 手札にカードを加える
	Card* PutOutCard(int index);          // 手札からカードを取り出す
	const Card* GetCard(int index) const; // カード情報表示などに使う

private:
	static const int MAX_CARD_ = 5;
	int card_count_ = 0;
	Card* pCards_[MAX_CARD_];
};

#endif // CARD_HAND_H_
