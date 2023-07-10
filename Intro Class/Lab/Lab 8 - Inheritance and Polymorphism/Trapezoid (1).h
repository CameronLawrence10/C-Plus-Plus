// Group Members: Steven Cabezas, James King, Tennare Jackson, Cameron Lawrence
// My Class: CPSC 1021
// Date: 10/31/2022
// Desc: Header File  for Trapezoid class
// Time: 10 min
#ifndef TRAPEZOID_H_
#define TRAPEZOID_H_
#include "Shape.h"
 
class Trapezoid : public Shape
{
   private:
       double base1{0};
       double base2{0};
       double height{0};
 
   public:
       Trapezoid() = default;
       Trapezoid(double base1, double base2, double height) : Shape("Trapezoid"), base1{base1}, base2{base2}, height{height} {}
       virtual double getArea() override;
};
 
#endif
