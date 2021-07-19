#ifndef CARD_H_
#define CARD_H_

#include <string>
#include "CardDisplay.h"

#include "ActionCommand.h"

// カード（基底クラス:抽象）
class Card
{
public:
    enum Type {
        Minion, Magic, Max
    };

private:
    Type type_;
	std::string name_;
	int cost_;
    CardDisplay* pDisplay_;
    ActionCommand* pActionCommand_;

public:
	Card(Type type, const std::string& name, int cost)
		: type_(type), name_(name), cost_(cost) {
	}
	virtual ~Card() {}

    // 場にカードを配置した時の特殊機能の実行
    void PlacementAction(Player* pSelf, Player* pOpponent) {
        pActionCommand_->DamageAction(pSelf,pOpponent);
    }; 

    // ダメージを受けた時の特殊機能の実行
    void DamageAction(Player* pSelf, Player* pOpponent) {
        pActionCommand_->DamageAction(pSelf, pOpponent);
    };    

    // HPが0になった時の特殊機能の実行（つまり断末魔）
    void DestroyAction(Player* pSelf, Player* pOpponent) {
        pActionCommand_->DestroyAction(pSelf, pOpponent);
    };   
    Type GetType(void) const { return type_; }
	const std::string& GetName(void) const { return name_; }
	int GetCost(void) const { return cost_;	}

    void AttachDisplay(CardDisplay* pDisplay) {
        pDisplay_ = pDisplay;
    }

    virtual void Display(void) const = 0;

    virtual void Damage(int damage) = 0;

protected:
    CardDisplay* GetDisplay(void) const { return pDisplay_; }
};

#endif // CARD_H_

