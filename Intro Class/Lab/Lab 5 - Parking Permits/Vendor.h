//Cameron Lawrence
//This program calculates parking passes for different people on Clemson's campus
//James, Tenarre, Steven
//Lab05

#include <string>
#ifndef VENDORS_H_
#define VENDORS_H_
using namespace std;
class Vendor {
  private:
  string name;
  string address;
  string email;
  string company;
  string location;
  public:
  Vendor();
  void setName(string n);
  void setAddress(string a);
  void setEmail(string e);
  void setCompany(string c);
  void setLocation(string l);
  string getName() const;
  string getAddress() const;
  string getEmail() const;
  string getCompany() const;
  string getLocation() const;
};
#endif //VENDORS_H_
 
 
 
 


