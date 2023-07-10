//Cameron Lawrence
//Lab03 1021
//This program calculates the area of different shapes using functions
//Steven, James, Tenarre
#ifndef TRAPEZOID_H
#define TRAPEZOID_H
 
// class declaration and object name
class Trapezoid{
 
   private:
       // private declaration of variable
       double base1;
       double base2;
       double height;
 
   public:
       // trapezoid class function prototypes
       bool setBase1(double b1);
       bool setBase2(double b2);
       bool setHeight(double h);
       double getBase1();
       double getBase2();
       double getHeight();
       double calcArea();
};
 
#endif


