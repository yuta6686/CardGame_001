#pragma once
class Player;
class ActionCommand {
public:
 // 場にカードを配置した時の特殊機能の実行
    virtual void PlacementAction(Player* pSelf, Player* pOpponent) = 0;

 // ダメージを受けた時の特殊機能の実行
    virtual void DamageAction(Player* pSelf, Player* pOpponent) = 0;

 // HPが0になった時の特殊機能の実行（つまり断末魔）
    virtual void DestroyAction(Player* pSelf, Player* pOpponent) = 0;
private:

};