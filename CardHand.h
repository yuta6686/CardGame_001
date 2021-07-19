#ifndef CARD_HAND_H_
#define CARD_HAND_H_


class Card; // 前方宣言

class CardHand
{
public:
	CardHand();
	~CardHand() {}

//  手札にカードを加える
	bool AddCard(Card* pCard);            

//  手札からカードを取り出す
	Card* PutOutCard(int index);          

//  カード情報表示などに使う
	const Card* GetCard(int index) const;

//	ゲッター
	int GetCardCount() const { return card_count_; }

private:
	static const int MAX_CARD_ = 5;
	int card_count_ = 0;
	Card* pCards_[MAX_CARD_];
};

#endif // CARD_HAND_H_
