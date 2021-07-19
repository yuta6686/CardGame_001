#ifndef CARD_DISPLAY_
#define CARD_DISPLAY_


class Card_Minion;
class Card_Magic;


class CardDisplay
{
public:
    virtual void Display(const Card_Minion* pCard) const = 0;
    virtual void Display(const Card_Magic* pCard) const = 0;
};

#endif // CARD_DISPLAY_
