//Cameron Lawrence
//Nov 25th
//CPSC 1020 (10:10AM - 11:00 AM)
//This program plays a simple card game with the computer based on cards that numbered with either orange or purple
//6 Hours
#include <iostream>
#include "Hand.h"
#include <string>
using namespace std;

//all formatted like description
int Hand :: getHandSize() { return hand.size(); }

Card Hand :: dealCard (int X) {
    Card dCard = hand[X];
    hand.erase (hand.begin() + X); return dCard; }

string Hand :: printHand() {
    string handP;
    for(unsigned i = 0; hand.size() >  i; i++) { handP += "[" + to_string(i+1) + "]" + " "+ hand[i].printCard() + " "; }
        return handP; }
        





