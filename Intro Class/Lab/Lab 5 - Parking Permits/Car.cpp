//Cameron Lawrence
//This program calculates parking passes for different people on Clemson's campus
//James, Tenarre, Steven
//Lab05

#include "Car.h"
#include <string>
using namespace std;
 
// function definitions for Date class member functions.
void Car::setMake(string mk){
   make = mk;
}
void Car::setModel(string m){
   model = m;
}
void Car::setPlateNum(string p){
   plateNum = p;
}
void Car::setYear(int y){
   year = y;
}
void Car::setColor(string c){
   color = c;
}
void Car::setCarType(string ct){
   carType = ct;
}
string Car::getMake() const{
   return make;
}
string Car::getModel() const{
   return model;
}
string Car::getPlateNum() const{
   return plateNum;
}
int Car::getYear() const{
   return year;
}
string Car::getColor() const{
   return color;
}
string Car::getCarType() const{
   return carType;
}

