//Cameron Lawrence
//Nov 25th
//CPSC 1020 (10:10AM - 11:00 AM)
//This program plays a simple card game with the computer based on cards that numbered with either orange or purple
//6 Hours
#ifndef HAND_H
#define HAND_H
#include "Deck.h"
#include <sstream>
#include <string>
#include <iostream>
#include <vector>
using namespace std;

class Hand {
    private:
        vector <Card> hand;

    public:
        Hand(Deck &deck, int N) {
            int i = 0;
            for(i = 0; N > i; i++) { hand.push_back ( deck.drawCard() ); }
        };
        Hand() =  default;
        Card dealCard(int num);
        int getHandSize();
        string printHand(); };

#endif//HAND_H