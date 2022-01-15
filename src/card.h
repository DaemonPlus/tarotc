#ifndef CARD_H
#define CARD_H

// Signifies an Arcana order. 
// Is either MAJOR or MINOR.
typedef enum {MAJOR, MINOR} order_t;
// Signifies the Suit of a card of Minor Arcana.
// Is either STAFFS, CUPTS, SWORDS, PENTACLES, or NONE if not of Minor Arcana.
typedef enum {NONE, STAFFS, CUPS, SWORDS, PENTACLES} suit_t;
// Possible orientations of a card.
// Is either UPRIGHT or REVERSE.
typedef enum {UPRIGHT, REVERSE} orientation_t;

// The card structure type.
typedef struct card_t{
    order_t         order;
    int             value;
    suit_t          suit;
    char*           name;
    orientation_t   orientation;
} card_t;

// Creates a card with correct name in upright position.
// Returns a pointer to the card_t struct.
card_t* create_card(order_t order, int value, suit_t suit);

// Frees a card struct and its members.
void free_card(card_t* card);

#endif