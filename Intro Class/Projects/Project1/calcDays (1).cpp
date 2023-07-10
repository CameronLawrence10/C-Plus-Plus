//Cameron Lawrence
//Project 1
//This project determines covid procedures based on positive and negative results, including other factors to determine isolation period
#include "calcDays.h"

//constant refrence
int calcDays(const Date& dateExposed, const Date& dateSecondDose) {
    int daysDiff2;
    int daysDiff1;
    
    daysDiff1 = overallDays(dateExposed.getMonth(), dateExposed.getDay(), dateExposed.getYear());
    daysDiff2 = overallDays(dateSecondDose.getMonth(), dateSecondDose.getDay(), dateSecondDose.getYear());

        return daysDiff1 - daysDiff2; 
}


int overallDays(int month, int day, int year) {
//default value for overall time at 0    
    int time = 0;

//for different amount of days in each month
    switch(month) {
        case 1:
            time += 31;
        case 2:
            time += 28;
        case 3:
            time += 31;
        case 4:
            time += 30;
        case 5:
            time += 31;
        case 6:
            time += 30;
        case 7:
            time += 31;
        case 8:
            time += 31;
        case 9:
            time += 30;
        case 10:
            time += 31;
        case 11:
            time += 30;
    }         


    time += day; //adds what day of the month it is

//if the year is 2022 at 365 days to get the right calculation
    if(year == 2022) {
        time += 365;
    }

    return time;
}