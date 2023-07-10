//Cameron Lawrence
//This program calculates parking passes for different people on Clemson's campus
//James, Tenarre, Steven
//Lab05


//including the necessary libraries
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
 
#include "Invoice.h"
 
// all the header files needed for customer types
#include "Employee.h"
#include "Student.h"
#include "Vendor.h"
#include "Visitor.h"
 
// all the header files needed for vehicle type
#include "Truck.h"
#include "Motorcycle.h"
#include "Car.h"
#include "Maintenance.h"
int main (){
  Invoice invoice; // needed for Invoice class, which will use prompt choices for member function showInvoice
  char typeCustomer; // used for input of type of customer
  char isFresh; // the following are discount related variables
  char isTA;
  char fromSC;
  // display menu option and introduce program
  cout <<"This program will allow you to purchase a permit type based on customer status and vehicle type.\n\n";
  cout << "First we will ask some discount related questions: \n";
  cout << "Are you a Freshman (Y or N): ";
  cin >> isFresh;
 
  while ((isFresh == 'Y' || isFresh == 'y') && (isFresh == 'N' || isFresh == 'y')){
      cout << "Please enter either Y(Yes) or N(No): ";
      cin >> isFresh;
  }
  cout << "Are you a TA (Y or N): ";
  cin >> isTA;
 
  while ((isTA == 'Y' || isTA == 'y') && (isTA == 'N' || isTA == 'y')){
      cout << "Please enter either Y(Yes) or N(No): ";
      cin >> isTA;
  }
  cout << "Are you from South Carolina (Y or N): ";
  cin >> fromSC;
  while ((fromSC == 'Y' || fromSC == 'y') && (fromSC == 'N' || fromSC == 'n')){
      cout << "Please enter either Y(Yes) or N(No): ";
      cin >> fromSC;
  }
  invoice.setIsFreshman(isFresh);
  invoice.setIsTA(isTA);
  invoice.setFromSC(fromSC);
 
 
  cout << "\nPlease select a customer type from the following:\n";
  cout << "-----------------------\n";
  cout << "\t V (Vendor)\n";
  cout << "\t S (Student)\n";
  cout << "\t E (Employee)\n";
  cout << "\t G (Visitor)\n";
  cout << "-----------------------\n";
  // prompt user to enter menu choice
  cin >> typeCustomer;
  while ((typeCustomer != 'V') && (typeCustomer != 'S') && (typeCustomer != 'E') && (typeCustomer != 'G')){
      cout << "Please enter a valid menu choice: ";
      cin >> typeCustomer;
  }
  invoice.setTypeCustomer(typeCustomer); // sets typeCustomer in member function file for class invoice
  // VEHICLE OPTIONS
  char typeVehicle; // use for input of user for vehicle type
   // menu with prompt for user to enter menu choice
  cout << "\nPlease select a vehicle type from the following:\n";
  cout << "-----------------------\n";
  cout << "\t T (Truck)\n";
  cout << "\t C (Car)\n";
  cout << "\t M (Maintenance)\n";
  cout << "\t B (Motorcycle)\n";
  cout << "-----------------------\n";
  cin >> typeVehicle;
  // input validation loop for the user's type of vehicle
  while ((typeVehicle != 'T') && (typeVehicle != 'C') && (typeVehicle != 'M') && (typeVehicle != 'B')){
      cout << "Please enter a valid menu choice: \n";
      cin >> typeVehicle;
  }
  invoice.setTypeVehicle(typeVehicle); // sets typeVehicle in member function file for class invoice
  // branches for overloaded showInvoice functions
  // VENDOR OVERLOADED FUNCTIONS
  if (typeCustomer == 'V' && typeVehicle == 'T'){
      Vendor vendor;
      string n;
      string a;
      string e;
      string c;
      string l;
      cout << "Please your enter name: ";
      cin.ignore();
      getline( cin, n);
      cout << "Please your enter address: ";
      getline( cin, a );
      cout << "Please your enter email: ";
      getline( cin, e );
      cout << "Please your enter comapany name: ";
      getline( cin, c );
      cout << "Please your enter company location: ";
      getline( cin, l );
      
      // sets member variables
      vendor.setName(n);
      vendor.setAddress(a);
      vendor.setEmail(e);
      vendor.setCompany(c);
      vendor.setLocation(l);
 
      Truck truck;
      string mk;
      string m;
      int y;
      string f;
      int d;
      cout << "Please enter vehicle make: ";
      getline(cin, mk);
      cout << "Please enter vehicle model: ";
      getline(cin, m);
      cout << "Please enter vehicle year: ";
      cin >> y;
      cout << "Please enter vehicle fuel type (diesel or gas): ";
      cin.ignore();
      getline(cin, f);
      cout << "Please enter number of doors on truck : ";
      cin >> d;
      // sets member variables
      truck.setMake(mk);
      truck.setModel(m);
      truck.setYear(y);
      truck.setFuel(f);
      truck.setDoors(d);
 
 
      invoice.showInvoice(vendor, truck);
  }
  else if (typeCustomer == 'V' && typeVehicle == 'C'){
      Vendor vendor;
      string n;
      string a;
      string e;
      string c;
      string l;
      cout << "Please enter your name: ";
      cin.ignore();
      getline( cin, n);
      cout << "Please enter your address: ";
      getline( cin, a );
      cout << "Please enter your email: ";
      getline( cin, e );
      cout << "Please enter your comapany name: ";
      getline( cin, c );
      cout << "Please enter your company location: ";
      getline( cin, l );
      
      // sets member variables
      vendor.setName(n);
      vendor.setAddress(a);
      vendor.setEmail(e);
      vendor.setCompany(c);
      vendor.setLocation(l);
 
      Car car;
      string mk;
      string m;
      int y;
      string color;
      string ct;
      cout << "Please enter vehicle make: ";
      getline( cin, mk );
      cout << "Please enter vehicle model: ";
      getline( cin, m);
      cout << "Please enter vehicle year: ";
      cin >> y;
      cout << "Please enter color of your car: ";
      cin.ignore();
      getline( cin, color);
      cout << "Please enter car type (electric, hybrid, gas): ";
      getline( cin, ct );
      // sets member variables
      car.setMake(mk);
      car.setModel(m);
      car.setYear(y);
      car.setColor(color);
      car.setCarType(ct);
 
      invoice.showInvoice(vendor, car);
  }
  else if (typeCustomer == 'V' && typeVehicle == 'M'){
      Vendor vendor;
      string n;
      string a;
      string e;
      string c;
      string l;
      cout << "Please enter your name: ";
      cin.ignore();
      getline( cin, n);
      cout << "Please enter your address: ";
      getline( cin, a );
      cout << "Please enter your email: ";
      getline( cin, e );
      cout << "Please enter your comapany name: ";
      getline( cin, c );
      cout << "Please enter your company location: ";
      getline( cin, l );
      
      // sets member variables
      vendor.setName(n);
      vendor.setAddress(a);
      vendor.setEmail(e);
      vendor.setCompany(c);
      vendor.setLocation(l);
 
      Maintenance maintenance;
      string mk;
      string m;
      int y;
      string pn;
      string st;
      cout << "Please enter vehicle make: ";
      getline( cin, mk );
      cout << "Please enter vehicle model: ";
      getline( cin, m );
      cout << "Please enter year: ";
      cin >> y;
      cout << "Please enter vehicle plate number : ";
      cin.ignore();
      getline( cin, pn );
      cout << "Please enter service being performed: ";
      getline( cin, st );
      // sets member variables
      maintenance.setMake(mk);
      maintenance.setModel(m);
      maintenance.setYear(y);
      maintenance.setPlateNum(pn);
      maintenance.setServiceType(st);
      
      invoice.showInvoice(vendor, maintenance);
  }
  else if  (typeCustomer == 'V' && typeVehicle == 'B'){
      Vendor vendor;
      string n;
      string a;
      string e;
      string c;
      string l;
      cout << "Please enter your name: ";
      cin.ignore();
      getline( cin, n);
      cout << "Please enter your address: ";
      getline( cin, a );
      cout << "Please enter your email: ";
      getline( cin, e );
      cout << "Please enter your comapany name: ";
      getline( cin, c );
      cout << "Please enter your company location: ";
      getline( cin, l );
      
      // sets member variables
      vendor.setName(n);
      vendor.setAddress(a);
      vendor.setEmail(e);
      vendor.setCompany(c);
      vendor.setLocation(l);
 
      Motorcycle motorcycle;
      string mk;
      string m;
      int y;
      int nw;
      int mpg;
      cout << "Please enter vehicle make: ";
      getline( cin, mk );
      cout << "Please enter vehicle model: ";
      getline( cin, m );
      cout << "Please enter vehicle year: ";
      cin >> y;
      cout << "Please enter wheel count (2 or 3): ";
      cin >> nw;
      cout << "Please enter miles per gallon: ";
      cin >> mpg;
      // sets member variables
      motorcycle.setMake(mk);
      motorcycle.setModel(m);
      motorcycle.setYear(y);
      motorcycle.setNumWheels(nw);
      motorcycle.setMPG(mpg);
 
      invoice.showInvoice(vendor, motorcycle);
  }
  // STUDENT OVERLOADED FUNCTIONS
  else if (typeCustomer == 'S' && typeVehicle == 'T'){
      Student student;
      string n;
      string a;
      string e;
      string sy;
      string m;
      cout << "Please enter your name: ";
      cin.ignore();
      getline( cin, n );
      cout << "Please enter your address: ";
      getline( cin, a );
      cout << "Please enter your email: ";
      getline( cin, e);
      cout << "Please enter your Student Class (Freshman Sophomore etc.): ";
      getline( cin, sy);
      cout << "Please enter your major: ";
      getline( cin, m);
      // sets member variables
      student.setName(n);
      student.setAddress(a);
      student.setEmail(e);
      student.setStudentYear(sy);
      student.setMajor(m);
 
      Truck truck;
      string mk;
      string model;
      int y;
      string f;
      int d;
      cout << "Please enter vehicle make: ";
      getline( cin, mk );
      cout << "Please enter vehicle model: ";
      getline( cin, model );
      cout << "Please enter vehicle year: ";
      cin >> y;
      cout << "Please enter vehicle fuel type (diesel or gas): ";
      cin.ignore();
      getline( cin, f );
      cout << "Please enter number of doors on truck : ";
      cin >> d;
      // sets member variables
      truck.setMake(mk);
      truck.setModel(m);
      truck.setYear(y);
      truck.setFuel(f);
      truck.setDoors(d);
 
      invoice.showInvoice(student, truck);
  }
  else if (typeCustomer == 'S' && typeVehicle == 'C'){
      Student student;
      string n;
      string a;
      string e;
      string sy;
      string major;
      cout << "Please your enter your name: ";
      cin.ignore();
      getline( cin, n );
      cout << "Please enter your address: ";
      getline( cin, a );
      cout << "Please enter your email: ";
      getline( cin, e);
      cout << "Please enter your Student Class (Freshman Sophomore etc.): ";
      getline( cin, sy);
      cout << "Please enter your major: ";
      getline( cin, major);
      // sets member variables
      student.setName(n);
      student.setAddress(a);
      student.setEmail(e);
      student.setStudentYear(sy);
      student.setMajor(major);
 
      Car car;
      string mk;
      string m;
      int y;
      string c;
      string ct;
      cout << "Please enter vehicle make: ";
      getline( cin, mk );
      cout << "Please enter vehicle model: ";
      getline( cin, m);
      cout << "Please enter vehicle year: ";
      cin >> y;
      cout << "Please enter color of your car: ";
      cin.ignore();
      getline( cin, c);
      cout << "Please enter car type (electric, hybrid, gas): ";
      getline( cin, ct );
      // sets member variables
      car.setMake(mk);
      car.setModel(m);
      car.setYear(y);
      car.setColor(c);
      car.setCarType(ct);
 
      invoice.showInvoice(student, car);
  }
  else if (typeCustomer == 'S' && typeVehicle == 'B'){
      Student student;
      string n;
      string a;
      string e;
      string sy;
      string maj;
      cout << "Please enter your name: ";
      cin.ignore();
      getline( cin, n );
      cout << "Please enter your address: ";
      getline( cin, a );
      cout << "Please enter your email: ";
      getline( cin, e);
      cout << "Please enter your Student Class (Freshman Sophomore etc.): ";
      getline( cin, sy);
      cout << "Please enter your major: ";
      getline( cin, maj);
      // sets member variables
      student.setName(n);
      student.setAddress(a);
      student.setEmail(e);
      student.setStudentYear(sy);
      student.setMajor(maj);
 
      Motorcycle motorcycle;
      string mk;
      string mod;
      int y;
      int nw;
      int mpg;
      cout << "Please enter vehicle make: ";
      getline( cin, mk );
      cout << "Please enter vehicle model: ";
      getline( cin, mod );
      cout << "Please enter vehicle year: ";
      cin >> y;
      cout << "Please enter vehicle wheel count (2 or 3): ";
      cin >> nw;
      cout << "Please enter miles per gallon: ";
      cin >> mpg;
      // sets member variables
      motorcycle.setMake(mk);
      motorcycle.setModel(mod);
      motorcycle.setYear(y);
      motorcycle.setNumWheels(nw);
      motorcycle.setMPG(mpg);
 
      invoice.showInvoice(student, motorcycle);
  }
  // EMPLOYEE OVERLOADED FUNCTIONS
  else if (typeCustomer == 'E' && typeVehicle == 'T'){
      Employee employee;
      string n;
      string a;
      string e;
      string b;
      int eNum;
      cout << "Please enter your name: ";
      cin.ignore();
      getline( cin, n );
      cout << "Please enter your address: ";
      getline( cin, a);
      cout << "Please enter your email: ";
      getline( cin, e);
      cout << "Please enter building worked in (Mcadams, WAP etc.): ";
      getline( cin, b );
      cout << "Please enter your numerical employee number: ";
      cin >> eNum;
      // sets member variables
      employee.setName(n);
      employee.setAddress(a);
      employee.setEmail(e);
      employee.setBuilding(b);
      employee.setEmployNum(eNum);
 
      Truck truck;
      string mk;
      string m;
      int y;
      string f;
      int d;
      cout << "Please enter vehicle make: ";
      cin.ignore();
      getline( cin, mk );
      cout << "Please enter vehicle model: ";
      getline( cin, m );
      cout << "Please enter vehicle year: ";
      cin >> y;
      cout << "Please enter vehicle fuel type (diesel or gas): ";
      cin.ignore();
      getline( cin, f );
      cout << "Please enter number of doors on truck : ";
      cin >> d;
      // sets member variables
      truck.setMake(mk);
      truck.setModel(m);
      truck.setYear(y);
      truck.setFuel(f);
      truck.setDoors(d);
 
      invoice.showInvoice(employee, truck);
  }
  else if (typeCustomer == 'E' && typeVehicle == 'C'){
      Employee employee;
      string n;
      string a;
      string e;
      string b;
      int eNum;
      cout << "Please enter your name: ";
      cin.ignore();
      getline( cin, n );
      cout << "Please enter your address: ";
      getline( cin, a);
      cout << "Please enter your email: ";
      getline( cin, e);
      cout << "Please enter building worked in (Mcadams, WAP etc.): ";
      getline( cin, b );
      cout << "Please enter your numerical employee number: ";
      cin >> eNum;
      // sets member variables
      employee.setName(n);
      employee.setAddress(a);
      employee.setEmail(e);
      employee.setBuilding(b);
      employee.setEmployNum(eNum);
 
      Car car;
      string mk;
      string m;
      int y;
      string c;
      string ct;
      cout << "Please enter vehicle make: ";
      cin.ignore();
      getline( cin, mk );
      cout << "Please enter vehicle model: ";
      getline( cin, m);
      cout << "Please enter vehicle year: ";
      cin >> y;
      cout << "Please enter color of your car: ";
      cin.ignore();
      getline( cin, c);
      cout << "Please enter car type (electric, hybrid, gas): ";
      getline( cin, ct );
      // sets member variables
      car.setMake(mk);
      car.setModel(m);
      car.setYear(y);
      car.setColor(c);
      car.setCarType(ct);
 
      invoice.showInvoice(employee, car);
  }
  else if (typeCustomer == 'E' && typeVehicle == 'M'){
      Employee employee;
      string n;
      string a;
      string e;
      string b;
      int eNum;
      cout << "Please enter your name: ";
      cin.ignore();
      getline( cin, n );
      cout << "Please enter your address: ";
      getline( cin, a);
      cout << "Please enter your email: ";
      getline( cin, e);
      cout << "Please enter building worked in (Mcadams, WAP etc.): ";
      getline( cin, b );
      cout << "Please enter your numerical employee number: ";
      cin >> eNum;
      // sets member variables
      employee.setName(n);
      employee.setAddress(a);
      employee.setEmail(e);
      employee.setBuilding(b);
      employee.setEmployNum(eNum);
 
      Maintenance maintenance;
      string mk;
      string m;
      int y;
      string pn;
      string st;
      cout << "Please enter vehicle make: ";
      cin.ignore();
      getline( cin, mk );
      cout << "Please enter vehicle model: ";
      getline( cin, m );
      cout << "Please enter vehicle year: ";
      cin >> y;
      cout << "Please enter vehicle plate number : ";
      cin.ignore();
      getline( cin, pn );
      cout << "Please enter service being performed: ";
      getline( cin, st );
      // sets member variables
      maintenance.setMake(mk);
      maintenance.setModel(m);
      maintenance.setYear(y);
      maintenance.setPlateNum(pn);
      maintenance.setServiceType(st);
 
      invoice.showInvoice(employee, maintenance);
  }
  else if (typeCustomer == 'E' && typeVehicle == 'B'){
      Employee employee;
      string n;
      string a;
      string e;
      string b;
      int eNum;
      cout << "Please enter your name: ";
      cin.ignore();
      getline( cin, n );
      cout << "Please enter your address: ";
      getline( cin, a);
      cout << "Please enter your email: ";
      getline( cin, e);
      cout << "Please enter building worked in (Mcadams, WAP etc.): ";
      getline( cin, b );
      cout << "Please enter your numerical employee number: ";
      cin >> eNum;
      // sets member variables
      employee.setName(n);
      employee.setAddress(a);
      employee.setEmail(e);
      employee.setBuilding(b);
      employee.setEmployNum(eNum);
 
      Motorcycle motorcycle;
      string mk;
      string m;
      int y;
      int nw;
      int mpg;
      cout << "Please enter vehicle make: ";
      cin.ignore();
      getline( cin, mk );
      cout << "Please enter vehicle model: ";
      getline( cin, m );
      cout << "Please enter vehicle year: ";
      cin >> y;
      cout << "Please enter vehicle wheel count (2 or 3): ";
      cin >> nw;
      cout << "Please enter miles per gallon: ";
      cin >> mpg;
      // sets member variables
      motorcycle.setMake(mk);
      motorcycle.setModel(m);
      motorcycle.setYear(y);
      motorcycle.setNumWheels(nw);
      motorcycle.setMPG(mpg);
 
      invoice.showInvoice(employee, motorcycle);
  }
  // VISITOR OVERLOADED FUNCTIONS
  else if (typeCustomer == 'G' && typeVehicle == 'T'){
      Visitor visitor;
      string n;
      string a;
      string e;
      string vr;
      int ds;
      cout << "Please enter your name: ";
      cin.ignore();
      getline(cin, n );
      cout << "Please enter your address: ";
      getline(cin, a );
      cout << "Please enter your email: ";
      getline(cin, e );
      cout << "Please enter your reason for visiting (business, pleasure etc.): ";
      getline(cin, vr );
      cout << "Please enter your duration of stay: ";
      cin >> ds;
      // sets member variables
      visitor.setName(n);
      visitor.setAddress(a);
      visitor.setEmail(e);
      visitor.setVisitReason(vr);
      visitor.setDurationStay(ds);
 
      Truck truck;
      string mk;
      string m;
      int y;
      string f;
      int d;
      cout << "Please enter vehicle make: ";
      cin.ignore();
      getline( cin, mk );
      cout << "Please enter vehicle  model: ";
      getline( cin, m );
      cout << "Please enter vehicle year: ";
      cin >> y;
      cout << "Please enter vehicle fuel type (diesel or gas): ";
      cin.ignore();
      getline( cin, f );
      cout << "Please enter vehicle number of doors on truck : ";
      cin >> d;
      // sets member variables
      truck.setMake(mk);
      truck.setModel(m);
      truck.setYear(y);
      truck.setFuel(f);
      truck.setDoors(d);
 
 
      invoice.showInvoice(visitor, truck);
  }
  else if (typeCustomer == 'G' && typeVehicle == 'C'){
      Visitor visitor;
      string n;
      string a;
      string e;
      string vr;
      int ds;
      cout << "Please enter your name: ";
      cin.ignore();
      getline( cin, n );
      cout << "Please enter your address: ";
      getline( cin, a );
      cout << "Please enter your email: ";
      getline( cin, e );
      cout << "Please enter your reason for visiting (business, pleasure etc.): ";
      getline( cin, vr );
      cout << "Please enter your duration of stay: ";
      cin >> ds;
      // sets member variables
      visitor.setName(n);
      visitor.setAddress(a);
      visitor.setEmail(e);
      visitor.setVisitReason(vr);
      visitor.setDurationStay(ds);
 
      Car car;
      string mk;
      string m;
      int y;
      string c;
      string ct;
      cout << "Please enter vehicle make: ";
      cin.ignore();
      getline( cin, mk );
      cout << "Please enter vehicle model: ";
      getline( cin, m);
      cout << "Please enter vehicle year: ";
      cin >> y;
      cout << "Please enter color of your car: ";
      cin.ignore();
      getline( cin, c);
      cout << "Please enter car type (electric, hybrid, gas): ";
      getline( cin, ct );
      // sets member variables
      car.setMake(mk);
      car.setModel(m);
      car.setYear(y);
      car.setColor(c);
      car.setCarType(ct);
 
      invoice.showInvoice(visitor,  car);
  }
  else if (typeCustomer == 'G' && typeVehicle == 'M'){
      Visitor visitor;
      string n;
      string a;
      string e;
      string vr;
      int ds;
      cout << "Please enter your name: ";
      cin.ignore();
      getline( cin, n );
      cout << "Please enter your address: ";
      getline( cin, a );
      cout << "Please enter your email: ";
      getline( cin, e );
      cout << "Please enter your reason for visiting (business, pleasure etc.): ";
      getline( cin, vr );
      cout << "Please enter your duration of stay: ";
      cin >> ds;
      // sets member variables
      visitor.setName(n);
      visitor.setAddress(a);
      visitor.setEmail(e);
      visitor.setVisitReason(vr);
      visitor.setDurationStay(ds);
 
      Maintenance maintenance;
      string mk;
      string m;
      int y;
      string pn;
      string st;
      cout << "Please enter vehicle make: ";
      cin.ignore();
      getline( cin, mk );
      cout << "Please enter vehicle model: ";
      getline( cin, m );
      cout << "Please enter vehicle year: ";
      cin >> y;
      cout << "Please enter vehicle plate number : ";
      cin.ignore();
      getline( cin, pn );
      cout << "Please enter service being performed: ";
      getline( cin, st );
      // sets member variables
      maintenance.setMake(mk);
      maintenance.setModel(m);
      maintenance.setYear(y);
      maintenance.setPlateNum(pn);
      maintenance.setServiceType(st);
 
      invoice.showInvoice(visitor, maintenance);
  }
  else if (typeCustomer == 'G' && typeVehicle == 'B'){
      Visitor visitor;
      string n;
      string a;
      string e;
      string vr;
      int ds;
      cout << "Please enter your name: ";
      cin.ignore();
      getline( cin, n );
      cout << "Please enter your address: ";
      getline( cin, a );
      cout << "Please enter your email: ";
      getline( cin, e );
      cout << "Please enter your reason for visiting (business, pleasure etc.): ";
      getline( cin, vr );
      cout << "Please enter your duration of stay : ";
      cin >> ds;
      // sets member variables
      visitor.setName(n);
      visitor.setAddress(a);
      visitor.setEmail(e);
      visitor.setVisitReason(vr);
      visitor.setDurationStay(ds);
 
      Motorcycle motorcycle;
      string mk;
      string m;
      int y;
      int nw;
      int mpg;
      cout << "Please enter vehicle make: ";
      cin.ignore();
      getline(cin, mk );
      cout << "Please enter vehicle model: ";
      getline(cin, m );
      cout << "Please enter vehicle year: ";
      cin >> y;
      cout << "Please enter vehicle wheel count (2 or 3): ";
      cin >> nw;
      cout << "Please enter miles per gallon: ";
      cin >> mpg;
      // sets member variables
      motorcycle.setMake(mk);
      motorcycle.setModel(m);
      motorcycle.setYear(y);
      motorcycle.setNumWheels(nw);
      motorcycle.setMPG(mpg);
 
      invoice.showInvoice(visitor, motorcycle);
  }
 
 
  return 0;
}


