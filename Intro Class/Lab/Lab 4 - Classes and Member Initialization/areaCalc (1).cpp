//Cameron Lawrence
//Lab03 1021
//This program calculates the area of different shapes using functions
//Steven, James, Tenarre
#include <iostream>
#include <iomanip>
using namespace std;
 
// all the header files needed
#include "Square.h"
#include "Circle.h"
#include "Trapezoid.h"
#include "Rectangle.h"
 
// main function
int main () {
 
// declaring variables
int userChoice;
double squareSide;
double circleRadius;
double base1Length, base2Length, heightLength;
double rectangleLength, rectangleWidth;
Circle myCircle;
Square mySquare;
Rectangle myRectangle;
Trapezoid myTrapezoid;
 
// the menu that shows the users what they can choose from
   cout << "Program to calculate areas of shapes\n";
   cout << "\t1 -- circle\n";
   cout << "\t2 -- square\n";
   cout << "\t3 -- rectangle\n";
   cout << "\t4 -- trapezoid\n";
   cout << "\t5 -- quit\n";
 
   // assigns the user's input to the variable userChoice
   cin >> userChoice;
 
//while loop for validation of userChoice 
   while (userChoice != 1 && userChoice != 2 && userChoice != 3 && userChoice != 4 && userChoice != 5){
       cout << "Invalid Input. Please choose a number between 1-5: ";
       cin >> userChoice;
   }
 
   // option for choice 1: finds the area of circle
   if (userChoice == 1){
        cout << "Radius: ";
        cin >> circleRadius;
 
       while (myCircle.setRadius(circleRadius) == 0){
           cout << "Invalid Input. Please greater than or equal to zero: ";
           cin >> circleRadius;
           cout << endl;
       }
 
       cout << "Area: " << fixed << setprecision (1) << myCircle.calcArea() << endl;
   }
 
   // option for choice 2: finds the area of square
   else if (userChoice == 2){
       cout << "Side: ";
       cin >> squareSide;
 
//while loop for invalid input of sqaureSide
       while (mySquare.setSide(squareSide) == 0){
           cout << "Invalid Input. Please greater than or equal to zero: ";
           cin >> squareSide;
           cout << endl;
       }
 
       cout << "Area: " << fixed << setprecision (1) << mySquare.calcArea() << endl;
   }
 
   // option for choice 3: finds the area of rectangle
   else if (userChoice == 3){
       cout << "Length: ";
       cin >> rectangleLength;

//while loop for invalid input of rectangleLength
       while (myRectangle.setLength(rectangleLength) == 0){
           cout << "Invalid Input. Please greater than or equal to zero: ";
           cin >> rectangleLength;
           cout << endl;
       }
 
       cout << "Width: ";
       cin >> rectangleWidth;
 
       while (myRectangle.setWidth(rectangleWidth) == 0){
           cout << "Invalid Input. Please greater than or equal to zero: ";
           cin >> rectangleWidth;
           cout << endl;
       }
 
       cout << "Area: " << fixed << setprecision (1) << myRectangle.calcArea() << endl;
   }
 
   // option for choice 4: finds the area of trapezoid
   else if (userChoice == 4){
       cout << "Base1: ";
       cin >> base1Length;
 
//while loop for invalid input of baseLength
       while (myTrapezoid.setBase1(base1Length) == 0){
           cout << "Invalid Input. Please greater than or equal to zero: ";
           cin >> base1Length;
           cout << endl;
       }
 
       cout << "Base2: ";
       cin >> base2Length;
 
//while loop for invalid input of base2Length 
       while (myTrapezoid.setBase2(base2Length) == 0){
           cout << "Invalid Input. Please greater than or equal to zero: ";
           cin >> base2Length;
           cout << endl;
       }
 
       cout << "Height: ";
       cin >> heightLength;
 
//while loop for invalid input testing of heightlength 
       while (myTrapezoid.setHeight(heightLength) == 0){
           cout << "Invalid Input. Please greater than or equal to zero: ";
           cin >> heightLength;
           cout << endl;
       }
 
       cout << "Area: " << fixed << setprecision (1) << myTrapezoid.calcArea() << endl;
   }
 
   // option for choice 5: quits program
   else if (userChoice == 5){
       exit(0);
   }
 
 
return 0;
}
