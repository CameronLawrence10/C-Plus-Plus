// Group Members: Steven Cabezas, James King, Tennare Jackson, Cameron Lawrence
// My Class: CPSC 1021
// Date: 10/31/2022
// Desc: Header File  for Shape class
// Time: 1hr
#ifndef SHAPE_H_
#define SHAPE_H_
 
#include <string>
 
class Shape
{
private:
   std::string name;
public:
   Shape() = default;
   Shape(std::string name) : name(name) {};
 
   virtual std::string printName() const final {return name;}
   virtual double getArea() = 0;
};
 
#endif
