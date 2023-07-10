//Cameron Lawrence
//Nov 25th
//CPSC 1020 (10:10AM - 11:00 AM)
//This program plays a simple card game with the computer based on cards that numbered with either orange or purple
//6 Hours
#ifndef CARD_H
#define CARD_H
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;


class Card {    
    public:
//enum for 1 P and 2 O        
        enum Color{purple = 1, orange = 2};
        
//default constructor
        Card() = default;
        Card(int rank, Color color) : rank{rank}, color{color} {value = color * rank;};
        
        Color getColor() {return color;}
        int getValue() {return value;}
        int getRank() {return rank;}
        string printCard(); 
    
    private:
//rank and value both both set to 0    
        int value = 0;
        int rank = 0;
        Color color {orange};
        };
#endif//CARD_H