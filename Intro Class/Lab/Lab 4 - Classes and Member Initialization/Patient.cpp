//Cameron Lawrence
//CPSC 2021 (M,W 2:30 - 3:20)
//James King, Tenarre Jackson, Steven Caebzas
//This program is written with classes to calculate the total patient/hopsital charges 

//all included libraries
#include "Patient.h"
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

//bool validation testing input from user, if input is 0 or greater, then return true, else false (int)
bool Patient::validateInput(int input) {
    if (input >= 0) {
        return true;
    }
        else {
            return false;
        }
}

//bool validation testing input from user, if input is 0 or greater, then return true, else false (double)
bool Patient::validateInput(double input) {
    if (input >= 0.00) {
        return true;
    }
        else {
            return false;
        }
}

//all getters for functions
//getter for patient type
char Patient::getPatientType() {
    return patientType;
}

//getter for days
int Patient::getDays() {
    return days;
}

//getter for rate
double Patient::getRate() {
    return rate;
}

//getter for rate
double Patient::getServices() {
    return services;
}

//getter medication
double Patient::getMedication() {
    return medication;
}

//Start of setters, for patient type
void Patient::setPatientType(char p) {
    patientType = p;
}

//setter for days
void Patient::setDays(int d) {
    if(validateInput(d)) {
        days = d;
    }
}

//setter for rate
void Patient::setRate(double r) {
    if(validateInput(days)) 
        if (validateInput(r))
        rate = r;
}


//setter for services
void Patient::setServices(double s) {
    if(validateInput(s)) {
        services = s;
    }
}

//setter for medication
void Patient::setMedication(double m) {
    if(validateInput(m)) {
        medication = m;
    }
}

//calcutlating the total charges for the program
double Patient::calcTotalCharges() {
    return getDays() * getRate() + getMedication() + getServices();
}
