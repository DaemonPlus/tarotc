#include<card.h>
void name_card(card_t* card);

card_t* create_card(arcana_order order, int value, minor_suit suit){
    card_t* card;
    
    card = (card_t*) calloc(1, sizeof(card));
    card->order = order;
    card->value = value;
    card->suit = suit;
    name_card(card);
}

void name_card(card_t* card){
    switch(card->order){
        case MAJOR:

            break;
        case MINOR:
            
            break;
    }
}

void free_card(card_t* card){
    free(card->name);
    free(card);
}