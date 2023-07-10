//Cameron Lawrence
//This program calculates parking passes for different people on Clemson's campus
//James, Tenarre, Steven
//Lab05

#include <string>
using namespace std;
 
#ifndef MAINTENANCE_H
#define MAINTENANCE_H
 
class Maintenance {
 private:
     string name;
     string make;
     string model;
     int year;
     string plateNum;
     string serviceType;
 public:
     Maintenance();
     void setName(string n);
     void setMake(string m);
     void setModel(string o);
     void setYear(int y);
     void setPlateNum(string p);
     void setServiceType(string st);
     string getName() const;
     string getMake() const;
     string getModel() const;
     double getYear() const;
     string getPlateNum() const;
     string getServiceType() const;
};
#endif //MAINTENANCE_H_