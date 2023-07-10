//Cameron Lawrence
//This program calculates parking passes for different people on Clemson's campus
//James, Tenarre, Steven
//Lab05

#include <string>
#include <iostream>
#include "Maintenance.h"
 
Maintenance::Maintenance() {
 name = " ";
 make = " ";
 model = " ";
 year = 2000;
 plateNum = " ";
 serviceType = " ";
}
//Setters
 void Maintenance::setName(string n) {
     name = n;
 }
 void Maintenance::setMake(string m) {
     make = m;
 }
 void Maintenance::setModel(string o) {
     model = o;
 }
 void Maintenance::setYear(int y) {
     year = y;
 }
 void Maintenance::setPlateNum(string p){
     plateNum = p;
 }
 void Maintenance::setServiceType(string st){
     serviceType = st;
 }
//Getters
 string Maintenance::getName() const{
     return name;
 }
 string Maintenance::getMake() const{
     return make;
 }
 string Maintenance::getModel() const{
     return model;
 }
 double Maintenance::getYear() const{
     return year;
 }
 string Maintenance::getPlateNum() const{
     return plateNum;
 }
 string Maintenance::getServiceType() const{
     return serviceType;
 }

