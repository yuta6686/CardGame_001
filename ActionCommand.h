#pragma once
class Player;
class ActionCommand {
public:
 // ��ɃJ�[�h��z�u�������̓���@�\�̎��s
    virtual void PlacementAction(Player* pSelf, Player* pOpponent) = 0;

 // �_���[�W���󂯂����̓���@�\�̎��s
    virtual void DamageAction(Player* pSelf, Player* pOpponent) = 0;

 // HP��0�ɂȂ������̓���@�\�̎��s�i�܂�f�����j
    virtual void DestroyAction(Player* pSelf, Player* pOpponent) = 0;
private:

};