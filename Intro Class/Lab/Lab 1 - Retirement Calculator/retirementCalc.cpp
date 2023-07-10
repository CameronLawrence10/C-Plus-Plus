//calculate retirement savings
//Cameron Lawrence

#include <iostream>
#include <string>
#include <iomanip>
#include <math.h>
#include "compoundCalc.h"
using namespace std;



//Main
int main() {

double X, Y, Z;

//prompting for inputs of P,R,T as X,Y,Z
cout << "(user prompt to enter P):" << endl;
cin >> X;

cout << "(user prompt to enter r):" << endl;
cin >> Y;  

cout << "(user prompt to enter t):" << endl;
cin >> Z;

//outputting total retirement savings 
cout << "Your retirement savings will be $" << fixed << setprecision(2) << compoundCalc(X , Y, Z) << endl;

return 0;
}