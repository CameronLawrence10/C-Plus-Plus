//Cameron Lawrence
//This program calculates parking passes for different people on Clemson's campus
//James, Tenarre, Steven
//Lab05

#include <string>
#include "Student.h"
using namespace std;
void Student::setName(string n)
{
  name = n;
}
void Student::setAddress(string a)
{
  address = a;
}
void Student::setEmail(string e)
{
  email = e;
}
void Student::setStudentYear(string s)
{
  studentYear = s;
}
void Student::setMajor(string m)
{
  major = m;
}
string Student::getName() const
{
  return name;
}
string Student::getAddress() const
{
  return address;
}
string Student::getEmail() const
{
  return email;
}
string Student::getStudentYear() const
{
  return studentYear;
}
string Student::getMajor() const
{
  return major;
}

