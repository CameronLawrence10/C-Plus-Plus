//Cameron Lawrence
//Lab03 1021
//This program calculates the area of different shapes using functions
//Steven, James, Tenarre
#include <iostream>
#include "Trapezoid.h"
 
////bool for Trapezoid testing invalid input of anything less than 0, returning true or false for base 1
bool Trapezoid::setBase1(double b1){
   bool validateData = true;
 
   if (b1 >= 0.00){
       base1 = b1;
   }
   else{
       validateData = false;
   }
  
   return validateData;
}
 
////bool for Trapezoid testing invalid input of anything less than 0, returning true or false for base 2
bool Trapezoid::setBase2(double b2){
   bool validateData = true;
 
   if (b2 >= 0.00){
       base2 = b2;
   }
   else{
       validateData = false;
   }
  
   return validateData;
}

//bool for Trapezoid testing invalid input of anything less than 0, returning true or false for height
bool Trapezoid::setHeight(double h){
   bool validateData = true;
 
   if (h >= 0.00){
       height = h;
   }
   else{
       validateData = false;
   }
  
   return validateData;
}
 
//getting base 1
double Trapezoid::getBase1(){
   return base1;
}
 
//getting base 2
double Trapezoid::getBase2(){
   return base2;
}
 
//getting height
double Trapezoid::getHeight(){
   return height;
}
 
//calculating the area for the trapezoid
double Trapezoid::calcArea(){
   return ((base1 + base2) / 2) * height;
}
