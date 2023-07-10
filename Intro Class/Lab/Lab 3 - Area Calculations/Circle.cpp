//Cameron Lawrence
//Lab03 1021
//This program calculates the area of different shapes using functions
//Steven, James, Tenarre
#include "Circle.h"
 
 
//bool for validating input, if less than zero, send false and gather a different input
bool Circle::setRadius(double r){
   bool validateData = true;
 
   if (r >= 0.00){
       radius = r;
   }
   else{
       validateData = false;
   }
  
   return validateData;
}
 
//grabbing the radius of the circle 
double Circle::getRadius(){
   return radius;
}
 
//calculating the area of the circle
double Circle::calcArea(){
   double radiusSquared;
  
   radiusSquared = radius * radius;
   return radiusSquared * 3.14;
}
