//Camerron Lawrence
//James King, Tenarre Jackson, Steven Cabezas
//This Lab is used to compare dates using command line arguments and comapre functions
//Lab06 (2:30 - 3:20 M W)
//Time spent 2 hours

#include <string>
#ifndef DATE_H_
#define DATE_H_
 
using namespace std;
 
class Date {
   private:
   int month{1};
   int day{1};
   int year{1900};
 
   public:
   // default constructor for 01/01/1900 and overloaded contstructor
   Date()= default;
   Date(int m, int d, int y) : month{m}, day{d}, year{y} {}
 
   // set functions
   void setMonth(int m);
   void setDay(int d);
   void setYear(int y);
 
   // get functions
   int  getMonth()const;
   int  getDay()const;
   int  getYear() const;
  
   // others in UML
   string static const MONTHS[12];
 
   string print();
   bool static compare( const Date &date1, const Date &date2);
 
};
 
#endif //DATE_H_