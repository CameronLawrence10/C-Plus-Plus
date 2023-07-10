//calculate retirement savings
//Cameron Lawrence

//libraries
#include <iostream>
#include <cmath>
#include <iomanip>
#include "compoundCalc.h"
using namespace std;

//function with p, r, and t
double compoundCalc(double p, double r, int t) {

    double total;
//setting double total to calculate retirement savings    
    total = p * pow((1+r),t);

return total;
}




