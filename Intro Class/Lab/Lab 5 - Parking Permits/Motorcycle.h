//Cameron Lawrence
//This program calculates parking passes for different people on Clemson's campus
//James, Tenarre, Steven
//Lab05

#include <string>
using namespace std;
#ifndef MOTORCYCLE_H
#define MOTORCYCLE_H
class Motorcycle
{
  private:
  string make;
  string model;
  string licensePlate;
  int year;
  int numWheels;
  int mpg;
  public:
  void setMake(string m);
  void setModel(string o);
  void setLicensePlate(string l);
  void setYear(int y);
  void setNumWheels(int w);
  void setMPG(int g);
  string getMake() const;
  string getModel() const;
  string getLicensePlate()const;
  int getYear() const;
  int getNumWheels() const;
  int getMPG() const;
};
#endif

