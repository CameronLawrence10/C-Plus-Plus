//Cameron Lawrence
//This program calculates parking passes for different people on Clemson's campus
//James, Tenarre, Steven
//Lab05

#include <string>
#ifndef STUDENT_H_
#define STUDENT_H_
using namespace std;
class Student{
  private:
  string name;
  string address;
  string email;
  string studentYear;
  string major;
 
  public:
  void setName(string n);
  void setAddress(string a);
  void setEmail(string e);
  void setStudentYear(string s);
  void setMajor(string m);
  string getName() const;
  string getAddress() const;
  string getEmail() const;
  string getStudentYear() const;
  string getMajor() const;
};
#endif

