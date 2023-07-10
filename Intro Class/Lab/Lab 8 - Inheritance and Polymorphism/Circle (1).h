// Group Members: Steven Cabezas, James King, Tennare Jackson, Cameron Lawrence
// My Class: CPSC 1021
// Date: 10/31/2022
// Desc: Header File  for Circle class
// Time: 10 min
#ifndef CIRCLE_H_
#define CIRCLE_H_
 
#include "Shape.h"
 
class Circle : public Shape{
   private:
       double radius{0};
       const double PI{3.14};
   public:
       Circle()= default;
       Circle(double radius) : Shape("Circle"), radius{radius} {}
       virtual double getArea() override;
};
 
#endif
