//Cameron Lawrence
//Lab03 1021
//This program calculates the area of different shapes using functions
//Steven, James, Tenarre
#include <iostream>
#include "Rectangle.h"
 
//bool for Rectangle testing invalid input of anything less than 0, returning true or false for length
bool Rectangle::setLength(double l){
   bool validateData = true;
 
   if (l >= 0.00){
       length = l;
   }
   else{
       validateData = false;
   }
  
   return validateData;
}
 
//bool for Rectangle testing invalid input of anything less than 0, returning true or false for width 
bool Rectangle::setWidth(double w){
   bool validateData = true;
 
   if (w >= 0.00){
       width = w;
   }
   else{
       validateData = false;
   }
   return validateData;
}
 
//getting length 
double Rectangle::getLength(){
   return length;
}
 
//getting width
double Rectangle::getWidth(){
   return width;
}
 
//calculating the area of the rectangle
double Rectangle::calcArea(){
   return length * width;
}
