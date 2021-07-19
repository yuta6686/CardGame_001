#ifndef DECK_H_
#define DECK_H_

class Card;


class Deck
{
public:
	Deck();
	~Deck();

	// �f�b�L�ɃJ�[�h��o�^����
	// ���� �J�[�h�̃|�C���^
	// �߂�l �J�[�h���o�^�ł�����true
	bool AddCard(Card* pCard);

	// �f�b�L����J�[�h���폜����
	// ���� �f�b�L�̃J�[�h�C���f�b�N�X
	// �߂�l �J�[�h���폜�ł�����true
	bool DeleteCard(int index);

	// �f�b�L����J�[�h�P���̃A�h���X�����炤
	// ���� �f�b�L�̃J�[�h�C���f�b�N�X
	// �߂�l �w�肳�ꂽ�C���f�b�N�X�̃J�[�h�ւ̃A�h���X
	//        �������Ȃ������ꍇ��nullptr
	Card* GetCard(int index);

	// �f�b�L���Ǘ�����ő�J�[�h�������擾����
	int GetCardMax(void) const { return CARD_MAX_; }

private:
	static const int CARD_MAX_ = 4;
	Card* cards_[CARD_MAX_];
};

#endif // DECK_H_
