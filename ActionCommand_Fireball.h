#pragma once
#include "ActionCommand.h"
#include "Player.h"
#include "Field.h"
#include "Card.h"

#include <cstdlib>
#include <iostream>

class ActionCommand_Fireball :public ActionCommand {
public:
//  ��ɃJ�[�h��z�u�������̓���@�\�̎��s
	virtual void PlacementAction(Player* pSelf,Player* pOpponent) override {

//	��ɂ����Ă���G�̃J�[�h���烉���_����
		int pOpponent_field_card_count = pOpponent->GetField()->GetCardCount();

		if (pOpponent_field_card_count <= 0) {
			std::count << "�U�����肪���܂���I�s���I" << std::endl;
			return;
		}
		//1���I������1�`3�̃_���[�W�𓖂�����
		int damage = rand() % 3 + 1;
		int index = rand() % pOpponent_field_card_count;

		pOpponent->GetField()->GetCard(index)->Damage(damage);

		std::cout << pOpponent->GetField()->GetCard(index)->GetName() << "��" << damage << "�_���[�W��^����" << std::endl;

	}

//  �_���[�W���󂯂����̓���@�\�̎��s
	virtual void DamageAction(Player* pSelf, Player* pOpponent) override {

	}

//  HP��0�ɂȂ������̓���@�\�̎��s�i�܂�f�����j
	virtual void DestroyAction(Player* pSelf, Player* pOpponent) override {

	}

private:
	
};