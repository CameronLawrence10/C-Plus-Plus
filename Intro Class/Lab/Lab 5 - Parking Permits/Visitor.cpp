//Cameron Lawrence
//This program calculates parking passes for different people on Clemson's campus
//James, Tenarre, Steven
//Lab05

#include <string>
#include "Visitor.h"
using namespace std;
Visitor::Visitor(){
  name = " ";
  address = " ";
  email = " ";
  durationStay = 2;
  visitReason = " ";
}
void Visitor::setName(string n) {
  name = n;
}
void Visitor::setAddress(string a){
  address = a;
}
void Visitor::setEmail(string e){
  email = e;
}
void Visitor::setVisitReason(string vr){
  visitReason = vr;
}
void Visitor::setDurationStay(int ds){
  durationStay = ds;
}
string Visitor::getName() const{
  return name;
}
string Visitor::getAddress() const{
  return address;
}
string Visitor::getEmail() const{
  return email;
}
string Visitor::getVisitReason() const{
  return visitReason;
}
int Visitor::getDurationStay() const{
  return durationStay;
}
