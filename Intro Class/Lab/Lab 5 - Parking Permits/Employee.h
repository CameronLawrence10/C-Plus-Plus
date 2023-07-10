//Cameron Lawrence
//This program calculates parking passes for different people on Clemson's campus
//James, Tenarre, Steven
//Lab05

#include <string>
using namespace std;
 
// header file
#ifndef EMPLOYEE_H
#define EMPLOYEE_H
 
// Car class declaration
class Employee{
 
   private:
   string name;
   string address;
   string email;
   string building;
   int employNum;
 
   public:
   void setName(string n);
   void setAddress(string a);
   void setEmail(string e);
   void setBuilding(string b);
   void setEmployNum(int num);
   string getName() const;
   string getAddress() const;
   string getEmail() const;
   string getBuilding() const;
   int getEmployNum() const;
 
};
 
#endif

