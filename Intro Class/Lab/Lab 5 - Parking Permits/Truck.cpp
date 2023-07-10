//Cameron Lawrence
//This program calculates parking passes for different people on Clemson's campus
//James, Tenarre, Steven
//Lab05

#include <string>
#include "Truck.h"
void Truck::setMake(string mk){
  make = mk;
}
void Truck::setModel(string m){
  model = m;
}
void Truck::setYear(int y){
  year = y;
}
void Truck::setFuel(string f){
  typeFuel = f;
}
void Truck::setDoors(int d){
  numDoors = d;
}
string Truck::getMake() const{
  return make;
}
string Truck::getModel() const{
  return model;
}
int Truck::getYear() const{
  return year;
}
string Truck::getFuel() const{
  return typeFuel;
}
int Truck::getDoors() const{
  return numDoors;
}

