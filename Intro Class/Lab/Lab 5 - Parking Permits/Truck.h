//Cameron Lawrence
//This program calculates parking passes for different people on Clemson's campus
//James, Tenarre, Steven
//Lab05

#include <string>
#ifndef TRUCK_H_
#define TRUCK_H_
using namespace std;
class Truck {
  private:
  string make;
  string model;
  int year;
  string typeFuel;
  int numDoors;
  public:
  void setMake(string mk);
  void setModel(string m);
  void setYear(int y);
  void setFuel(string f);
  void setDoors(int d);
  string getMake() const;
  string getModel() const;
  int getYear() const;
  string getFuel() const;
  int getDoors() const;
};
#endif //TRUCK_H_
 
 
 
