// Group Members: Steven Cabezas, James King, Tennare Jackson, Cameron Lawrence
// My Class: CPSC 1021
// Date: 10/31/2022
// Desc: Main for lab 8 (creating objects for shapes and outputting vector)
// Time: 1hr 30 min
#include "Shape.h"
#include "Rectangle.h"
#include "Square.h"
#include "Circle.h"
#include "Trapezoid.h"
#include <iostream>
#include <iomanip>
 
#include <vector>
 
using namespace std;
 
int main()
{
 // make an object named 'circle' from class Circle with radius initialized to 2.0
   Circle circle{2.0};
 // make an object named 'square' from class Square with side initialized to 2.0
   Square square{2.0};
 // make an object named 'rectangle' from class Rectangle with length initialized to 2.5 and width to 3.0
   Rectangle rectangle{2.5, 3.0};
 // make an object named 'trapezoid' from class Trapezoid with base1 initialized to 2.5, base2 to 3.5, and height to 4.0
   Trapezoid trapezoid{2.5, 3.5, 4.0};
  // make a vector 'vector<Type>shapeVect {element0, element1, element2, element3}'
 // where 'Type' is a pointer to class Shape and each element is the memory address
 // of one of objects you have instantiated above
   vector<Shape*>shapeVect{&circle, &square, &rectangle, &trapezoid};
 
  // use a range-based for loop to print the name and area of each object using
 // functions printName() and getArea() accessed through the base class pointer
  
   for (Shape* i: shapeVect) {
       cout << "Area of " <<i->printName() << ' ' << fixed << setprecision(1)<< i->getArea() <<'\n';
   }
  return 0;
}
