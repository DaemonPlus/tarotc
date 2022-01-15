#define str(x) #x
#define xstr(x) str(x)

#include <card.h>
#include <stdio.h>

void name_card(card_t* card);

card_t* create_card(order_t order, int value, suit_t suit){
    card_t* card;
    
    card = (card_t*) calloc(1, sizeof(card));
    card->order = order;
    card->value = value;
    card->suit = suit;
    card->orientation = REVERSE;
    name_card(card);
}

void name_card(card_t* card){
    size_t length;

    switch(card->order){
        case MAJOR:
            length = snprintf(NULL, 0, "%d - unkown", card->value);
            card->name = malloc(length * sizeof(char));
            snprintf(card->name, length, "%d - unkown", card->value);
            break;
        case MINOR:
            length = snprintf(NULL, 0, "%d of %s", card->value, card->value, xstr(card->suit));
            card->name = malloc(length * sizeof(char));
            snprintf(card->name, length, "%d of %s", card->value, card->value, xstr(card->suit));
            break;
    }
}

void free_card(card_t* card){
    free(card->name);
    free(card);
}