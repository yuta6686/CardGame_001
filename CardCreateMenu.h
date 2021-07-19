#ifndef CARD_CREATE_MENU_H_
#define CARD_CREATE_MENU_H_

#include <string>
class Card;


class CardCreateMenu
{
public:
	CardCreateMenu();

	virtual Card* Create(void) = 0;

    virtual void CreateMenu(void) = 0;


protected:
    void InputName(void);
    void InputCost(void);

    const std::string& GetName(void) const { return name_; }
    int GetCost(void) const { return cost_; }

private:
	std::string name_;
	int cost_;
};

#endif // CARD_CREATE_MENU_H_
