//Camerron Lawrence
//James King, Tenarre Jackson, Steven Cabezas
//This Lab is used to compare dates using command line arguments and comapre functions
//Lab06 (2:30 - 3:20 M W)
//Time spent 2 hours

#include <iostream>
#include <string>
#include <iomanip>
#include "Date.h"
#include <algorithm>
#include <sstream>
using namespace std;
 
 
 
   // array
   string const Date::MONTHS[12] {"JANUARY", "FEBRUARY", "MARCH", "APRIL", "MAY", "JUNE",
   "JULY", "AUGUST","SEPTEMBER", "OCTOBER", "NOVEMBER", "DECEMBER"};
   
// set functions
   void Date::setMonth(int m){
       month = m;
   }
   void Date::setDay(int d){
       day = d;
   }
   void Date::setYear(int y){
       year = y;
   }
 
   // get functions
    int Date::getMonth() const{
       return month;
   }
   int Date::getDay() const{
       return day;
   }
   int Date::getYear()const{
       return year;
   }
  
   // others in UML
  
   bool Date::compare( const Date &date1, const Date &date2){
       bool status = false;
      if (date1.getYear() == date2.getYear()){
           if (date1.getMonth() == date2.getMonth()){
               if (date1.getDay() == date2.getDay()){
                   status = false;
               }
               else if (date1.getDay() < date2.getDay()){
                   status = true;
               }
               else if (date1.getDay() > date2.getDay()){
                    status =false;
               }
           }
           else if (date1.getMonth() < date2.getMonth()){
                status =true;
           }
           else if (date1.getMonth() > date2.getMonth()){
               status = false;
           }
      }
      else if (date1.getYear() < date2.getYear()){
            status =true;
      }
       else if (date1.getYear() > date2.getYear()){
            status = false;
       }
 
   if (date1.getYear() == date2.getYear()){
       if (date1.getMonth() == date2.getMonth()){
           if (date1.getDay() == date2.getDay()){
                status = true;
           }
       }
   }
   return status;
}
 
  
  
    string Date::print(){
      stringstream ss;
 
    ss << left << setw(10) << MONTHS[month-1];
    ss << setw(3) << day;
    ss << setw(5) << year;
       return ss.str();
   }







