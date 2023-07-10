//Cameron Lawrence
//Project 1
//This project determines covid procedures based on positive and negative results, including other factors to determine isolation period
#include "Date.h"
#include <iostream>
using namespace std;

Date::Date(int m, int d, int y) : month {m}, day {d}, year {y} {
    setMonth(m);

    if(setMonth(m) == false || setDay(d) == false || setYear(y) == false) {
        day = 01;
        month = 01;
        year = 2021;
    }
}

//bool for set Days, if else statements for calculating the days in the 12 months
bool Date::setDay(int d) {
    if ((month == 4) && (day > 0 && day < 31))  {
        return true;
    }

        else if ((month == 6) && (day > 0 && day < 31))  {
            return true;
        }

        else if ((month == 9) && (day > 0 && day < 31))  {
            return true;
        }

        else if ((month == 11) && (day > 0 && day < 31))  {
            return true;
        }

        else if ((month == 1) && (day > 0 && day < 32))  {
            return true;
        }

        else if ((month == 3) && (day > 0 && day < 32))  {
            return true;
        }

        else if ((month == 5) && (day > 0 && day < 32)) {
            return true;
        }

        else if ((month == 7) && (day > 0 && day < 32))  {
            return true;
        }

        else if ((month == 8) && (day > 0 && day < 32))  {
            return true;
        }

        else if ((month == 10) && (day > 0 && day < 32))  {
            return true;
        }

        else if ((month == 12) && (day > 0 && day < 32))  {
            return true;
        }

        else if((month == 2) && (day > 0 && day < 28)) {
            return true;
        }

        else if((month == 2) && (day == 30)) {
            return false;
        }
        
        else if(month == 20) {
            return false;
        }

            else {
                return false;
            }
}

//bool for set month and else if statements for if there is more than 12 months in that year
bool Date::setMonth(int m) {
    if (m > 0 && m < 13) {
        month = m;
        return true;
    }
        else {
            return false;
        }
}

//bool for setting the year, making sure the year is between 2021 and 2022, because covid was non extistent before then 
bool Date::setYear(int y) {
    if (y > 2020 && y < 2023) {
        year = y;
        return true;
    }
        else {
            return false;
        }
}

//getter constants for day, month, year
int Date::getDay() const {
    return day;
    }

int Date::getMonth() const {
    return month;
    }

int Date::getYear() const {
    return year;
    }

//string 'to_string' to convert values into strings for formatting the output date
string Date::showDate() {
    string sDate;

//formatting for days, it will put a 0 in front of days that are less than 10. ex: 7 = 07
    string sDay = to_string(day);
    if (day < 10) {
        sDay = "0" + sDay;
    }

//formatting for months, it will put a 0 in front of months that are less than 10. ex: 7 = 07
    string sMonth = to_string(month);
    if (month < 10) {
        sMonth = "0" + sMonth;
    }
//string for year
    string sYear = to_string(year);
//outputting the date in format
    sDate = sMonth + "/" + sDay + "/" + sYear;

    return sDate;
}