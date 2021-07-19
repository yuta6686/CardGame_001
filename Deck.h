#ifndef DECK_H_
#define DECK_H_

class Card;


class Deck
{
public:
	Deck();
	~Deck();

	// デッキにカードを登録する
	// 引数 カードのポインタ
	// 戻り値 カードが登録できたらtrue
	bool AddCard(Card* pCard);

	// デッキからカードを削除する
	// 引数 デッキのカードインデックス
	// 戻り値 カードが削除できたらtrue
	bool DeleteCard(int index);

	// デッキからカード１枚のアドレスをもらう
	// 引数 デッキのカードインデックス
	// 戻り値 指定されたインデックスのカードへのアドレス
	//        ただしなかった場合はnullptr
	Card* GetCard(int index);

	// デッキが管理する最大カード枚数を取得する
	int GetCardMax(void) const { return CARD_MAX_; }

private:
	static const int CARD_MAX_ = 4;
	Card* cards_[CARD_MAX_];
};

#endif // DECK_H_
