#ifndef CARD_MAGIC_H_
#define CARD_MAGIC_H_

#include "Card.h"


class Card_Magic : public Card
{
public:
    Card_Magic(Type type, const std::string& name, int cost) : Card(Magic, name, cost) {}
    ~Card_Magic() {}

    void Display(void) const override { GetDisplay()->Display(this); }
};


#endif // CARD_MAGIC_H_
