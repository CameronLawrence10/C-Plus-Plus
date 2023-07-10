//Cameron Lawrence
//This program calculates parking passes for different people on Clemson's campus
//James, Tenarre, Steven
//Lab05

#include "Employee.h"
#include <string>
using namespace std;
 
void Employee::setName(string n){
   name = n;
}
void Employee::setAddress(string a){
   address = a;
}
void Employee::setEmail(string e){
   email = e;
}
void Employee::setBuilding(string b){
   building = b;
}
void Employee::setEmployNum(int num){
   employNum = num;
}
string Employee::getName() const{
   return name;
}
string Employee::getAddress() const{
   return address;
}
string Employee::getEmail() const{
   return email;
}
string Employee::getBuilding() const{
   return building;
}
int Employee::getEmployNum() const{
   return employNum;
}

