//Cameron Lawrence
//Nov 25th
//CPSC 1020 (10:10AM - 11:00 AM)
//This program plays a simple card game with the computer based on cards that numbered with either orange or purple
//6 Hours
#include "Card.h"
using namespace std;

string Card :: printCard() {
string CR;

//if 2 color is orange
    if (color == 2) { CR = "orange:" + to_string(rank); }

//else if color is 1 then purple   
    else if (color == 1) { CR = "purple:" + to_string(rank); }

    return CR; }