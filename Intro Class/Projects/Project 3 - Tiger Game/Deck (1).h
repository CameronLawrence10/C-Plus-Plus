//Cameron Lawrence
//Nov 25th
//CPSC 1020 (10:10AM - 11:00 AM)
//This program plays a simple card game with the computer based on cards that numbered with either orange or purple
//6 Hours
#ifndef DECK_H
#define DECK_H
#include <vector>
#include <cstdlib>
#include <algorithm>
#include <iostream>
#include <string>
#include <ctime>
#include "Card.h"

class Deck {
    private:
        vector<Card> deck;  
    public:
        Card drawCard();
        Deck();
        int getDeckSize();
        void shuffle(); };
  
#endif//DECK_H