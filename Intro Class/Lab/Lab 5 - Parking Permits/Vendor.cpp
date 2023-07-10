//Cameron Lawrence
//This program calculates parking passes for different people on Clemson's campus
//James, Tenarre, Steven
//Lab05
#include <string>
#include "Vendor.h"
Vendor::Vendor(){
  name = " ";
  address = " ";
  email = " ";
  company = " ";
  location = " ";
}
void Vendor::setName(string n) {
  name = n;
}
void Vendor::setAddress(string a){
  address = a;
}
void Vendor::setEmail(string e){
  email = e;
}
void Vendor::setCompany(string c){
  company = c;
}
void Vendor::setLocation(string l){
  location = l;
}
string Vendor::getName() const{
  return name;
}
string Vendor::getAddress() const{
  return address;
}
string Vendor::getEmail() const{
  return email;
}
string Vendor::getCompany() const{
  return company;
}
string Vendor::getLocation() const{
  return location;
}

