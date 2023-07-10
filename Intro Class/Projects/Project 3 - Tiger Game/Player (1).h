//Cameron Lawrence
//Nov 25th
//CPSC 1020 (10:10AM - 11:00 AM)
//This program plays a simple card game with the computer based on cards that numbered with either orange or purple
//6 Hours
#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Player {
    private:

    public:
        Hand hand;
        int score = 0;
        Player() = default;
        Player(Deck &deck, int N) : hand(deck, N) {}; };

#endif//PLAYER_H