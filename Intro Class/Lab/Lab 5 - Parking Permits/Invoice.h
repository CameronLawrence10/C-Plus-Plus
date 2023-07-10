//Cameron Lawrence
//This program calculates parking passes for different people on Clemson's campus
//James, Tenarre, Steven
//Lab05

#include "Vendor.h"
#include "Truck.h"
#include "Employee.h"
#include "Car.h"
#include "Motorcycle.h"
#include "Student.h"
#include "Maintenance.h"
#include "Visitor.h"
#ifndef INVOICE_H_
#define INVOICE_H_
class Invoice {
  private:
  char typeCustomer;
  char typeVehicle;
  char isFreshman; // is not a freshman
  char isTA;   // is a TA
  char fromSC; // from south carolina
  //double servCharge{20.00};
   public:
  void setTypeCustomer(char tc);
  void setTypeVehicle(char tv);
  void setIsFreshman(char fresh);
  void setIsTA(char TA);
  void setFromSC(char SC);
  char getTypeVehicle();
  char getTypeCustomer();
  char getIsFreshman();
  char getIsTA();
  char getFromSC();
  double calcDiscount();
  double calcCustPrice();
  double calcVechPrice();
  double calcTotal();
 
  ///////////////////////////////////////////////////////////////////////
  void showInvoice(const Vendor &vendor, const Truck &truck);
  void showInvoice(const Vendor &vendor, const Car &car);
  void showInvoice(const Vendor &vendor, const Motorcycle &motorcycle);
  void showInvoice(const Vendor &vendor, const Maintenance &maintenance);
  ///////////////////////////////////////////////////////////////////////
  ////////////////////////////////////////////////////////////////////////
  void showInvoice(const Employee &employee, const Maintenance &maintenance);
  void showInvoice(const Employee &employee, const Truck &truck);
  void showInvoice(const Employee &employee, const Car &car);
  void showInvoice(const Employee &employee, const Motorcycle &motorcycle);
  ///////////////////////////////////////////////////////////////////////
   ///////////////////////////////////////////////////////////////////////
  void showInvoice(const Student &student, const Car &car);
  void showInvoice(const Student &student, const Motorcycle &motorcycle);
  void showInvoice(const Student &student, const Truck &truck);
  ///////////////////////////////////////////////////////////////////////
  ///////////////////////////////////////////////////////////////////////
  void showInvoice(const Visitor &visitor, const Truck &truck);
  void showInvoice(const Visitor &visitor, const Car &car);
  void showInvoice(const Visitor &visitor, const Motorcycle &motorcycle);
  void showInvoice(const Visitor &visitor, const Maintenance &maintenance);
  ///////////////////////////////////////////////////////////////////////
 
};
#endif //INVOICE_H_