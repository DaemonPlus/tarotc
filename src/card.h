#ifndef CARD_H
#define CARD_H

#include<stdlib.h>

// Signifies an Arcana order. 
// Is either MAJOR or MINOR.
typedef enum arcana_order{MAJOR, MINOR} arcana_order;
// Signifies the Suit of a card of Minor Arcana.
// Is either STAFFS, CUPTS, SWORDS, PENTACLES, or NONE if not of Minor Arcana.
typedef enum minor_suit{NONE, STAFFS, CUPS, SWORDS, PENTACLES} minor_suit;
// Possible orientations of a card.
// Is either UPRIGHT or REVERSE.
typedef enum orientation{UPRIGHT, REVERSE} orientation;

// The card structure type.
typedef struct card_t{
    arcana_order    order;
    int             value;
    minor_suit      suit;
    char*           name;
    orientation     orientation;
} card_t;

// Creates a card with correct name in upright position.
// Returns a pointer to the card_t struct.
card_t* create_card(arcana_order order, int value, minor_suit suit);

// Frees a card struct and its members from meory.
void free_card(card_t* card);

#endif