// Group Members: Steven Cabezas, James King, Tennare Jackson, Cameron Lawrence
// My Class: CPSC 1021
// Date: 10/31/2022
// Desc: Header file for rectangle class
// Time: 1hr
#ifndef RECTANGLE_H_
#define RECTANGLE_H_
 
#include "Shape.h"
 
class Rectangle : public Shape
{
   private:
       double length{0};
       double width {0};
   public:
       Rectangle() = default;
       Rectangle(double length, double width) : Shape("Rectangle"), length{length}, width{width} {}
       virtual double getArea() override;
 
};
 
#endif
