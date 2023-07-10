//Cameron Lawrence
//Lab03 1021
//This program calculates the area of different shapes using functions
//Steven, James, Tenarre
#ifndef CIRCLE_H_
#define CIRCLE_H_
 
// class declaration and object name
class Circle{
 
   private:
       // private declaration of variable
       double radius;
 
   public:
       // circle class function prototypes
       bool setRadius(double r);
       double getRadius();
       double calcArea();
};
 
#endif
