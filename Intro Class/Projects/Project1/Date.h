//Cameron Lawrence
//Project 1
//This project determines covid procedures based on positive and negative results, including other factors to determine isolation period

#ifndef DATE_H_
#define DATE_H_
#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
using namespace std;

class Date {
    public:
//default contructor and constructor for day, month, year       
        Date() = default; 
        Date(int m, int d, int y);
//getter for day, monnth , eyar
        int getDay() const;
        int getMonth() const;
        int getYear() const;
//setter for day, month, year        
        bool setDay(int d);
        bool setMonth(int m);
        bool setYear(int y);
        string showDate();
    
    //required default dates (private)      
    private:    
        int day {01};
        int month {01};
        int year {2021};

};

#endif //DATE_H_