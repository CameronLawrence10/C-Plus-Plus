//Cameron Lawrence
//This program calculates parking passes for different people on Clemson's campus
//James, Tenarre, Steven
//Lab05

#include <iostream>
#include <string>
#include "Invoice.h"
#include "Vendor.h"
#include "Truck.h"
#include "Employee.h"
#include "Car.h"
#include "Motorcycle.h"
#include "Student.h"
#include "Maintenance.h"
#include "Visitor.h"
using namespace std;
void Invoice::setTypeCustomer(char tc ){
 typeCustomer = tc;
}
void Invoice::setTypeVehicle(char tv){
  typeVehicle = tv;
}
void Invoice::setIsFreshman(char fresh){
  isFreshman = fresh;
}
 void Invoice::setIsTA(char TA){
  isTA = TA;
}
void Invoice::setFromSC(char SC){
  fromSC = SC;
}
char Invoice::getTypeCustomer(){
  return typeCustomer;
}
char Invoice::getTypeVehicle(){
  return typeVehicle;
}
char Invoice::getIsFreshman() {
  return isFreshman;
}
char Invoice::getIsTA(){
  return isTA;
}
char Invoice::getFromSC() {
  return fromSC;
}
double Invoice::calcDiscount(){
  double discount = 0;
   if (getIsFreshman() == 'N'){
      discount = 20.00;
  }
  if (getIsTA() == 'Y'){
      discount += 30.00;
  }
  if (getFromSC() == 'Y'){
      discount += 20.00;
  }
  return discount;
}
double Invoice::calcCustPrice(){
  char c = getTypeCustomer();
  switch (c){
      case 'V':
          return 200.00;
      case 'S':
          return 100.00;
      case 'E':
          return 110.00;
      case 'G':
          return 120.00;
      default:
          return 100;
  }
}
double Invoice::calcVechPrice(){
   char v = getTypeVehicle();
  switch (v){
      case 'T':
          return 150.00;
      case 'C':
          return 100.00;
      case 'M':
          return 50.00;
      case 'B':
          return 80.00;
      default:
          return 100;
  }
}
double Invoice::calcTotal(){
  return calcCustPrice() + calcVechPrice();
}
 
// START OF VENDOR
void Invoice::showInvoice(const Vendor &vendor, const Truck &truck){
  cout << "\n----------INVOICE---------" << endl;
  cout << "---Personal Information---" << endl;
  cout << "Type of Customer: Vendor\n";
  cout << "Name: " << vendor.getName() << endl;
  cout << "Address: " << vendor.getAddress() << endl;
  cout << "Email: " << vendor.getEmail() << endl;
  cout << "Company: " << vendor.getCompany() << endl;
  cout << "Location: " << vendor.getLocation() << endl;
   cout << "\n---Vehicle Information---" << endl;
  cout << "Type of Vehicle: Truck\n";
  cout << "Make: " << truck.getMake() << endl;
  cout << "Model: " << truck.getModel() << endl;
  cout << "Year: " << truck.getYear() << endl;
  cout << "Fuel type: " << truck.getFuel() << endl;
  cout << "Number of doors: " << truck.getDoors() << endl;
  cout << "\nFINAL PERMIT PRICE (w/ discount included): $" << calcTotal() + 20.00 - calcDiscount() << endl;
}
 
void Invoice::showInvoice(const Vendor &vendor, const Car &car){
  cout << "\n----------INVOICE---------" << endl;
  cout << "---Personal Information---" << endl;
  cout << "Type of Customer: Vendor\n";
  cout << "Name: " << vendor.getName() << endl;
  cout << "Address: " << vendor.getAddress() << endl;
  cout << "Email: " << vendor.getEmail() << endl;
  cout << "Company: " << vendor.getCompany() << endl;
  cout << "Location: " << vendor.getLocation() << endl;
   cout << "\n---Vehicle Information---" << endl;
  cout << "Type of Vehicle: Car\n";
  cout << "Make: " << car.getMake() << endl;
  cout << "Model: " << car.getModel() << endl;
  cout << "Year: " << car.getYear() << endl;
  cout << "Vehicle Color: " << car.getColor() << endl;
  cout << "Car Type: " << car.getCarType() << endl;
 
  cout << "\nFINAL PERMIT PRICE (w/ discount included): $" << calcTotal() + 20.00 - calcDiscount() << endl;
}
void Invoice::showInvoice(const Vendor &vendor, const Motorcycle &motorcycle){
  cout << "\n----------INVOICE---------" << endl;
  cout << "---Personal Information---" << endl;
  cout << "Type of Customer: Vendor\n";
  cout << "Name: " << vendor.getName() << endl;
  cout << "Address: " << vendor.getAddress() << endl;
  cout << "Email: " << vendor.getEmail() << endl;
  cout << "Company: " << vendor.getCompany() << endl;
  cout << "Location: " << vendor.getLocation() << endl;
  cout << "\n---Vehicle Information---" << endl;
  cout << "Type of Vehicle: Motorcycle\n";
  cout << "Make: " << motorcycle.getMake() << endl;
  cout << "Model: " << motorcycle.getModel() << endl;
  cout << "Year: " << motorcycle.getYear() << endl;
  cout << "Number of wheels: " << motorcycle.getNumWheels() << endl;
  cout << "MPG: " << motorcycle.getMPG() << endl;
 
 cout << "\nFINAL PERMIT PRICE (w/ discount included): $" << calcTotal() + 20.00 - calcDiscount() << endl;
}
void Invoice::showInvoice(const Vendor &vendor, const Maintenance &maintenance){
  cout << "\n----------INVOICE---------" << endl;
  cout << "---Personal Information---" << endl;
  cout << "Type of Customer: Vendor\n";
  cout << "Name: " << vendor.getName() << endl;
  cout << "Address: " << vendor.getAddress() << endl;
  cout << "Email: " << vendor.getEmail() << endl;
  cout << "Company: " << vendor.getCompany() << endl;
  cout << "Location: " << vendor.getLocation() << endl;
   cout << "\n---Vehicle Information---" << endl;
  cout << "Type of Vehicle: Maintenance\n";
  cout << "Make: " << maintenance.getMake() << endl;
  cout << "Model: " << maintenance.getModel() << endl;
  cout << "Year: " << maintenance.getYear() << endl;
  cout << "License plate number: " << maintenance.getPlateNum() << endl;
  cout << "Type of service: " << maintenance.getServiceType() << endl;
 
  cout << "\nFINAL PERMIT PRICE (w/ discount included): $" << calcTotal() + 20.00 - calcDiscount() << endl;
}
//START OF STUDENT
void Invoice::showInvoice(const Student &student, const Car &car){
  cout << "\n----------INVOICE---------" << endl;
  cout << "---Personal Information---" << endl;
  cout << "Type of Customer: Student\n";
  cout << "Name: " << student.getName() << endl;
  cout << "Address: " << student.getAddress() << endl;
  cout << "Email: " << student.getEmail() << endl;
  cout << "Student Class: " << student.getStudentYear() << endl;
  cout << "Major: " << student.getMajor() << endl;
  cout << "\n---Vehicle Information---" << endl;
  cout << "Type of Vehicle: Car\n";
  cout << "Make: " << car.getMake() << endl;
  cout << "Model: " << car.getModel() << endl;
  cout << "Year: " << car.getYear() << endl;
  cout << "Vehicle Color: " << car.getColor() << endl;
  cout << "Car Type: " << car.getCarType() << endl;
 
  cout << "\nFINAL PERMIT PRICE (w/ discount included): $" << calcTotal() + 20.00 - calcDiscount()<< endl;
}
void Invoice::showInvoice(const Student &student, const Truck &truck){
  cout << "\n----------INVOICE---------" << endl;
  cout << "---Personal Information---" << endl;
  cout << "Type of Customer: Student\n";
  cout << "Name: " << student.getName() << endl;
  cout << "Address: " << student.getAddress() << endl;
  cout << "Email: " << student.getEmail() << endl;
  cout << "Student Class: " << student.getStudentYear() << endl;
  cout << "Major: " << student.getMajor() << endl;
  cout << "\n---Vehicle Information---" << endl;
  cout << "Type of Vehicle: Truck\n";
  cout << "Make: " << truck.getMake() << endl;
  cout << "Model: " << truck.getModel() << endl;
  cout << "Year: " << truck.getYear() << endl;
  cout << "Fuel type: " << truck.getFuel() << endl;
  cout << "Number of doors: " << truck.getDoors() << endl;
 
  cout << "\nFINAL PERMIT PRICE (w/ discount included): $" << calcTotal() + 20.00 - calcDiscount()<< endl;
 }
void Invoice::showInvoice(const Student &student, const Motorcycle &motorcycle){
  cout << "\n----------INVOICE---------" << endl;
  cout << "---Personal Information---" << endl;
  cout << "Type of Customer: Student\n";
  cout << "Name: " << student.getName() << endl;
  cout << "Address: " << student.getAddress() << endl;
  cout << "Email: " << student.getEmail() << endl;
  cout << "Student Class: " << student.getStudentYear() << endl;
  cout << "Major: " << student.getMajor() << endl;
  cout << "\n---Vehicle Information---" << endl;
  cout << "Type of Vehicle: Motorcycle\n";
  cout << "Make: " << motorcycle.getMake() << endl;
  cout << "Model: " << motorcycle.getModel() << endl;
  cout << "Year: " << motorcycle.getYear() << endl;
  cout << "Number of wheels: " << motorcycle.getNumWheels() << endl;
  cout << "MPG: " << motorcycle.getMPG() << endl;
 
  cout << "\nFINAL PERMIT PRICE (w/ discount included): $" << calcTotal() + 20.00 - calcDiscount()<< endl;
}
 
//START OF VISITOR
void Invoice::showInvoice(const Visitor &visitor, const Truck &truck) {
  cout << "\n----------INVOICE---------" << endl;
  cout << "---Personal Information---\n";
  cout << "Type of Customer: Visitor\n";
  cout << "Name: " << visitor.getName() << endl;
  cout << "Address: " << visitor.getAddress() << endl;
  cout << "Email: " << visitor.getEmail() << endl;
  cout << "Visit Reason: " << visitor.getVisitReason() << endl;
  cout << "Duration: " << visitor.getDurationStay() << endl;
   cout << "\n---Vehicle Information---" << endl;
  cout << "Type of Vehicle: Truck\n";
  cout << "Make: " << truck.getMake() << endl;
  cout << "Model: " << truck.getModel() << endl;
  cout << "Year: " << truck.getYear() << endl;
  cout << "Fuel type: " << truck.getFuel() << endl;
  cout << "Number of doors: " << truck.getDoors() << endl;
 
  cout << "\nFINAL PERMIT PRICE (w/ discount included): $" << calcTotal() + 20.00 - calcDiscount() << endl;
}
 
void Invoice::showInvoice(const Visitor &visitor, const Car &car) {
  cout << "\n----------INVOICE---------" << endl;
  cout << "---Personal Information---\n";
  cout << "Type of Customer: Visitor\n";
  cout << "Name: " << visitor.getName() << endl;
  cout << "Address: " << visitor.getAddress() << endl;
  cout << "Email: " << visitor.getEmail() << endl;
  cout << "Visit Reason: " << visitor.getVisitReason() << endl;
  cout << "Duration: " << visitor.getDurationStay() << endl;
   cout << "\n---Vehicle Information---" << endl;
  cout << "Type of Vehicle: Car\n";
  cout << "Make: " << car.getMake() << endl;
  cout << "Model: " << car.getModel() << endl;
  cout << "Year: " << car.getYear() << endl;
  cout << "Car type: " << car.getCarType() << endl;
  cout << "Vehicle color: " << car.getColor() << endl;
 
  cout << "\nFINAL PERMIT PRICE (w/ discount included): $" << calcTotal() + 20.00 - calcDiscount() << endl;
}
void Invoice::showInvoice(const Visitor &visitor, const Motorcycle &motorcycle) {
  cout << "\n----------INVOICE---------" << endl;
  cout << "---Personal Information---\n";
  cout << "Type of Customer: Visitor\n";
  cout << "Name: " << visitor.getName() << endl;
  cout << "Address: " << visitor.getAddress() << endl;
  cout << "Email: " << visitor.getEmail() << endl;
  cout << "Visit Reason: " << visitor.getVisitReason() << endl;
  cout << "Duration: " << visitor.getDurationStay() << endl;
 
  cout << "\n---Vehicle Information---" << endl;
  cout << "Type of Vehicle: Motorcycle\n";
  cout << "Make: " << motorcycle.getMake() << endl;
  cout << "Model: " << motorcycle.getModel() << endl;
  cout << "Year: " << motorcycle.getYear() << endl;
  cout << "Number of wheels: " << motorcycle.getNumWheels() << endl;
  cout << "MPG: " << motorcycle.getMPG() << endl;
 
  cout << "\nFINAL PERMIT PRICE (w/ discount included): $" << calcTotal() + 20.00 - calcDiscount()<< endl;
}
void Invoice::showInvoice(const Visitor &visitor, const Maintenance &maintenance) {
  cout << "\n----------INVOICE---------" << endl;
  cout << "---Personal Information---\n";
  cout << "Type of Customer: Visitor\n";
  cout << "Name: " << visitor.getName() << endl;
  cout << "Address: " << visitor.getAddress() << endl;
  cout << "Email: " << visitor.getEmail() << endl;
  cout << "Visit Reason: " << visitor.getVisitReason() << endl;
  cout << "Duration: " << visitor.getDurationStay() << endl;
 
  cout << "\n---Vehicle Information---" << endl;
  cout << "Type of Vehicle: Maintenance\n";
  cout << "Make: " << maintenance.getMake() << endl;
  cout << "Model: " << maintenance.getModel() << endl;
  cout << "Year: " << maintenance.getYear() << endl;
  cout << "License plate number: " << maintenance.getPlateNum() << endl;
  cout << "Type of service: " << maintenance.getServiceType() << endl;
 
  cout << "\nFINAL PERMIT PRICE (w/ discount included): $" << calcTotal() + 20.00 - calcDiscount()<< endl;
}
 
 
//START OF EMPLOYEE
void Invoice::showInvoice(const Employee &employee, const Maintenance &maintenance){
  cout << "\n----------INVOICE---------" << endl;
  cout << "---Personal Information---\n";
  cout << "Type of Customer: Employee\n";
  cout << "Name: " << employee.getName() << endl;
  cout << "Address: " << employee.getAddress() << endl;
  cout << "Email: " << employee.getEmail() << endl;
  cout << "Employee number: " << employee.getEmployNum() << endl;
  cout << "Building: " << employee.getBuilding() << endl;
 
  cout << "\n---Vehicle Information---" << endl;
  cout << "Type of Vehicle: Maintenance\n";
  cout << "Make: " << maintenance.getMake() << endl;
  cout << "Model: " << maintenance.getModel() << endl;
  cout << "Year: " << maintenance.getYear() << endl;
  cout << "License plate number: " << maintenance.getPlateNum() << endl;
  cout << "Type of service: " << maintenance.getServiceType() << endl;
 
  cout << "\nFINAL PERMIT PRICE (w/ discount included): $" << calcTotal() + 20.00 - calcDiscount()<< endl;
}
 
void Invoice::showInvoice(const Employee &employee, const Truck &truck){
  cout << "\n----------INVOICE---------" << endl;
  cout << "---Personal Information---\n";
  cout << "Type of Customer: Employee\n";
  cout << "Name: " << employee.getName() << endl;
  cout << "Address: " << employee.getAddress() << endl;
  cout << "Email: " << employee.getEmail() << endl;
  cout << "Employee number: " << employee.getEmployNum() << endl;
  cout << "Building: " << employee.getBuilding() << endl;
 
  cout << "\n---Vehicle Information---" << endl;
  cout << "Type of Vehicle: Truck\n";
  cout << "Make: " << truck.getMake() << endl;
  cout << "Model: " << truck.getModel() << endl;
  cout << "Year: " << truck.getYear() << endl;
  cout << "Fuel type: " << truck.getFuel() << endl;
  cout << "Number of doors: " << truck.getDoors() << endl;
 
  cout << "\nFINAL PERMIT PRICE (w/ discount included): $" << calcTotal() + 20.00 - calcDiscount()<< endl;
}
 
void Invoice::showInvoice(const Employee &employee, const Car &car){
  cout << "\n----------INVOICE---------" << endl;
  cout << "---Personal Information---\n";
  cout << "Type of Customer: Employee\n";
  cout << "Name: " << employee.getName() << endl;
  cout << "Address: " << employee.getAddress() << endl;
  cout << "Email: " << employee.getEmail() << endl;
  cout << "Employee number: " << employee.getEmployNum() << endl;
  cout << "Building: " << employee.getBuilding() << endl;
 
  cout << "\n---Vehicle Information---" << endl;
  cout << "Type of Vehicle: Car\n";
  cout << "Make: " << car.getMake() << endl;
  cout << "Model: " << car.getModel() << endl;
  cout << "Year: " << car.getYear() << endl;
  cout << "Car type: " << car.getCarType() << endl;
  cout << "Vehicle color: " << car.getColor() << endl;
 
  cout << "\nFINAL PERMIT PRICE (w/ discount included): $" << calcTotal() + 20.00 - calcDiscount()<< endl;
}
 
void Invoice::showInvoice(const Employee &employee, const Motorcycle &motorcycle){
  cout << "\n----------INVOICE---------" << endl;
  cout << "---Personal Information---\n";
  cout << "Type of Customer: Employee\n";
  cout << "Name: " << employee.getName() << endl;
  cout << "Address: " << employee.getAddress() << endl;
  cout << "Email: " << employee.getEmail() << endl;
  cout << "Employee number: " << employee.getEmployNum() << endl;
  cout << "Building: " << employee.getBuilding() << endl;
 
  cout << "\n---Vehicle Information---" << endl;
  cout << "Type of Vehicle: Motorcycle\n";
  cout << "Make: " << motorcycle.getMake() << endl;
  cout << "Model: " << motorcycle.getModel() << endl;
  cout << "Year: " << motorcycle.getYear() << endl;
  cout << "Number of wheels: " << motorcycle.getNumWheels() << endl;
  cout << "MPG: " << motorcycle.getMPG() << endl;
 
  cout << "\nFINAL PERMIT PRICE (w/ discount included): $" << calcTotal() + 20.00 - calcDiscount()<< endl;
}

