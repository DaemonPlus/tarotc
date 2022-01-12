#ifndef CARD_H
#define CARD_H

#include<stdlib.h>

typedef enum arcana_order{MAJOR, MINOR} arcana_order;
typedef enum minor_suit{NONE, STAFFS, CUPS, SWORDS, PENTACLES} minor_suit;
typedef enum orientation{UPRIGHT, REVERSE} orientation;

typedef struct card_t{
    arcana_order    order;
    int             value;
    minor_suit      suit;
    char*           name;
    orientation     orientation;
} card_t;

card_t* create_card(arcana_order order, int value, minor_suit suit);
card_t* name_card(card_t* card);
void free_card(card_t* card);

#endif