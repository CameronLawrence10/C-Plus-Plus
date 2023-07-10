//Cameron Lawrence
//This program calculates parking passes for different people on Clemson's campus
//James, Tenarre, Steven
//Lab05

#include <string>
using namespace std;
 
// header file
#ifndef CAR_H
#define CAR_H
 
// Car class declaration
class Car{
 
   private:
   string make;
   string model;
   string plateNum;
   int year;
   string color;
   string carType;
 
   public:
   void setMake(string mk);
   void setModel(string m);
   void setPlateNum(string p);
   void setYear(int y);
   void setColor(string c);
   void setCarType(string ct);
   string getMake() const;
   string getModel() const;
   string getPlateNum() const;
   int getYear() const;
   string getColor() const;
   string getCarType() const;
 
};
 
#endif

