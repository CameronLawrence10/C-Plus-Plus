//Cameron Lawrence
//Lab03 1021
//This program calculates the area of different shapes using functions
//Steven, James, Tenarre
#ifndef RECTANGLE_H
#define RECTANGLE_H
 
// class declaration and object name
class Rectangle{
 
   private:
       // private declaration of variables
       double length;
       double width;
 
   public:
       // rectangle class function prototypes
       bool setLength(double l);
       bool setWidth(double w);
       double getLength();
       double getWidth();
       double calcArea();
 
};
 
#endif


