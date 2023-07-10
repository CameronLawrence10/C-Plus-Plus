//Cameron Lawrence
//Nov 25th
//CPSC 1020 (10:10AM - 11:00 AM)
//This program plays a simple card game with the computer based on cards that numbered with either orange or purple
//6 Hours
#include <iostream>
#include <string>
#include "Card.h"
#include "Deck.h"
using namespace std;

//all formatted like description
    int t;
    int shuff;

    int Deck :: getDeckSize() {
    return deck.size(); }

Card Deck :: drawCard() {
    Card X = deck[0];
    deck.erase(deck.begin());
    return X; }

//shuffle the deck
void Deck :: shuffle() {
    t = 0;
    shuff = 1;
    srand(unsigned(time(0)));
    random_shuffle(deck.begin(), deck.end()); }

//Deck
Deck :: Deck() {
    int i = 1;
    if ( i == 1) {
        for (i = 1; 11 > i; i++) {
            Card :: Color y = Card :: orange;
            Card cardY(i, y);
            deck.push_back(cardY); 
        
            Card :: Color x = Card :: purple;
            Card cardX (i, x);
            deck.push_back (cardX); }}}
                

    



