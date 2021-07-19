#ifndef CARD_MINION_H_
#define CARD_MINION_H_

#include "Card.h"


class Card_Minion : public Card
{
private:
	int attack_;
	int life_;

public:
	Card_Minion(const std::string& name, int cost, int attack, int life) 
		: Card(Minion, name, cost), attack_(attack), life_(life) {
	}
    ~Card_Minion() {
    }
    
    void Display(void) const override { GetDisplay()->Display(this); }

	int GetAttack(void) const { return attack_; }
	int GetLife(void) const { return life_; }

	void Damage(int damage)override {
		life_ -= damage;
		if (life_ < 0) {
			life_ = 0;
		}
	}
};

#endif // CARD_MINION_H_
