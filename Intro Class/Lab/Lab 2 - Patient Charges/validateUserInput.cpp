//CPSC 2021 (M,W 2:30 - 3:20)
//Cameron Lawrence

//All needed includes
#include <iostream>
#include <string>
#include "validateUserInput.h"
using namespace std;

//true or false for validateUserInput, if user is 0 or greater on any inputs then return true
//anything below 0, else return false
bool validateUserInput(double user) {

    if (user > -1) {
        return true;
    }

        else {
            cout << "Try again\n";
            return false;
        }
}

    

   
