//Cameron Lawrence
//Lab03 1021
//This program calculates the area of different shapes using functions
//Steven, James, Tenarre
#include <iostream>
#include "Square.h"
 
//bool for Sqaure testing invalid input of anything less than 0, returning true or false for side of sqaure
bool Square::setSide(double s){
   bool validateData = true;
 
   if (s >= 0.00){
       side = s;
   }
   else{
       validateData = false;
   }
  
   return validateData;
}
 
// getting the side of the square
double Square::getSide(){
   return side;
}

//calculating side * side for area of a sqaure
double Square::calcArea(){
   return side * side;
}
