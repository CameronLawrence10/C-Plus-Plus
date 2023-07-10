//Cameron Lawrence
//This program calculates parking passes for different people on Clemson's campus
//James, Tenarre, Steven
//Lab05

#include <string>
#include "Motorcycle.h"
using namespace std;
void Motorcycle::setMake(string m)
{
  make = m;
}
void Motorcycle::setModel(string o)
{
  model = o;
}
void Motorcycle::setLicensePlate(string l)
{
  licensePlate = l;
}
void Motorcycle::setYear(int y)
{
  year = y;
}
void Motorcycle::setNumWheels(int w)
{
  numWheels = w;
}
void Motorcycle::setMPG(int g)
{
  mpg = g;
}
string Motorcycle::getMake() const
{
  return make;
}
string Motorcycle::getModel() const
{
  return model;
}
string Motorcycle::getLicensePlate() const
{
  return licensePlate;
}
int Motorcycle::getYear() const
{
  return year;
}
int Motorcycle::getNumWheels() const
{
  return numWheels;
}
int Motorcycle::getMPG() const
{
  return mpg;
}
