//Cameron Lawrence
//Lab03 1021
//This program calculates the area of different shapes using functions
//Steven, James, Tenarre
#ifndef SQUARE_H
#define SQUARE_H
 
// class declaration and object name
class Square{
 
   private:
       // private declaration of variable
       double side;
 
   public:
       // square class function prototypes
       bool setSide(double s);
       double getSide();
       double calcArea();
};
 
#endif
