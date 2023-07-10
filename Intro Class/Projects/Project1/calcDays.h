//Cameron Lawrence
//Project 1
//This project determines covid procedures based on positive and negative results, including other factors to determine isolation period
#ifndef CALCDAYS_H_
#define CALCDAYS_H_
#include "Date.h"
#include <iomanip>
#include <iostream>
using namespace std;

//calcDays and the amount of days since january to calculate the date
int calcDays(const Date& dateExposed, const Date& dateSecondDose);
int overallDays(int month, int day, int year);

#endif //CALCDAYS_H_