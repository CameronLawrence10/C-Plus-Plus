//Cameron Lawrence
//This program calculates parking passes for different people on Clemson's campus
//James, Tenarre, Steven
//Lab05

#include <string>
using namespace std;
 
// header file
#ifndef VISITOR_H
#define VISITOR_H
 
// Car class declaration
class Visitor{
 private:
 string name;
 string address;
 string email;
 string visitReason;
 int durationStay;
 
 public:
 Visitor();
 void setName(string n);
 void setAddress(string a);
 void setEmail(string e);
 void setVisitReason(string vr);
 void setDurationStay(int ds);
 string getName() const;
 string getAddress() const;
 string getEmail() const;
 string getVisitReason() const;
 int getDurationStay() const;
 
};
#endif
