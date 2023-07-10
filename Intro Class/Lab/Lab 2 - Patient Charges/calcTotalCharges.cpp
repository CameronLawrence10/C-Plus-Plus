//CPSC 2021 (M,W 2:30 - 3:20)
//Cameron Lawrence

//All needed includes
#include "calcTotalCharges.h"
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

//overloading function for option 'I' including three doubles and one int. Calculates answer for calcTotalCharges, when called
double calcTotalCharges(int days, double rate, double fees, double charges) {

    double answer;
    answer = charges + (rate * days) + fees;
    return answer;
}

//overloading function for option 'O', calculates answer for calcTotalCharges, when called
double calcTotalCharges(double fees, double charges) {

    double answer;
    answer = charges + fees;
    return answer;
}

