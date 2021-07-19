#ifndef CARD_H_
#define CARD_H_

#include <string>
#include "CardDisplay.h"

#include "ActionCommand.h"

// �J�[�h�i���N���X:���ہj
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

    // ��ɃJ�[�h��z�u�������̓���@�\�̎��s
    void PlacementAction(Player* pSelf, Player* pOpponent) {
        pActionCommand_->DamageAction(pSelf,pOpponent);
    }; 

    // �_���[�W���󂯂����̓���@�\�̎��s
    void DamageAction(Player* pSelf, Player* pOpponent) {
        pActionCommand_->DamageAction(pSelf, pOpponent);
    };    

    // HP��0�ɂȂ������̓���@�\�̎��s�i�܂�f�����j
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

