#pragma once
#include "ActionCommand.h"
#include "Player.h"
#include "Field.h"
#include "Card.h"

#include <cstdlib>
#include <iostream>

class ActionCommand_Fireball :public ActionCommand {
public:
//  場にカードを配置した時の特殊機能の実行
	virtual void PlacementAction(Player* pSelf,Player* pOpponent) override {

//	場においてある敵のカードからランダムに
		int pOpponent_field_card_count = pOpponent->GetField()->GetCardCount();

		if (pOpponent_field_card_count <= 0) {
			std::count << "攻撃相手がいません！不発！" << std::endl;
			return;
		}
		//1枚選択して1～3のダメージを当たえる
		int damage = rand() % 3 + 1;
		int index = rand() % pOpponent_field_card_count;

		pOpponent->GetField()->GetCard(index)->Damage(damage);

		std::cout << pOpponent->GetField()->GetCard(index)->GetName() << "に" << damage << "ダメージを与えた" << std::endl;

	}

//  ダメージを受けた時の特殊機能の実行
	virtual void DamageAction(Player* pSelf, Player* pOpponent) override {

	}

//  HPが0になった時の特殊機能の実行（つまり断末魔）
	virtual void DestroyAction(Player* pSelf, Player* pOpponent) override {

	}

private:
	
};