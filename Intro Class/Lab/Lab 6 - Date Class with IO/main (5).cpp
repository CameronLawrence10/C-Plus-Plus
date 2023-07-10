//Camerron Lawrence
//James King, Tenarre Jackson, Steven Cabezas
//This Lab is used to compare dates using command line arguments and comapre functions
//Lab06 (2:30 - 3:20 M W)
//Time spent 2 hours

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
#include "Date.h"
using namespace std;
 
int main ( int argc, char const *argv[]) {
 
ifstream myfile; // declaring file name myfile
ofstream outfile;
   int numDate;
   int month;
   int day;
   int year;
 
 vector<Date> dates; // declares a vector for class Date
 
myfile.open (argv[1]);
 if (myfile.is_open())
 {
 
   myfile >> numDate; // scans in the number of dates that will be entered
 
 
    // while file is not at the end
 
 
 
    
 
      
     for (int i = 0; i < numDate; i++) { //loops through assigning objects with values in the vector
       myfile >> month;
       myfile >> day;
       myfile >> year;
 
       Date date(month, day, year); // declares new instance of date     
       dates.push_back(date); // set each int to the end of the vector
 
       /*dates[i].setMonth(month);
       dates[i].setDay(day);
       dates[i].setYear(year);*/
 
     }
   myfile.close();
 
   sort(dates.begin(), dates.end(), Date::compare);
 
  
   outfile.open(argv[2]);
 
 for (int i = 0; i < numDate; i++) {
    outfile << dates[i].print() << '\n';
 }
  }
 
 else cout << "Unable to open file";
   return 0;
 
}


