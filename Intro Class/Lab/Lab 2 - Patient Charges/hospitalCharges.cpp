//CPSC 2021 (M,W 2:30 - 3:20)
//Cameron Lawrence
//Program to calculate patient charges for a hospital

//All needed includes
#include <iostream>
#include <string>
#include "validateUserInput.h"
#include "calcTotalCharges.h"
using namespace std;

//start of main
int main() {

//variables for all charges wether patient chooses 'I' or 'O'
    char patient;
    double days;
    double rate;
    double fees;
    double charges;

//printing out program, asking for user input for in-patient or out-patient
    cout << "This program will calculate a patient's hospital charges.\n";
    cout << "Enter I for in-patient or O for out-patient: \n";
    cin >> patient;

    do {
        cout << "Try again, Enter either I or O\n";
        cin >> patient;
    }while (patient != 'O' && patient != 'I');

//if user input is 'I', execute these 4 variables. Use validateUserInput to test if all inputs are valid
//function is called every read in variable to test if all inputs are valid
    if (patient == 'I') {
        cout << "Number of days in the hospital: \n";
        cin >> days;

//Loop for days validation
        do {
            cin >> days;
            }while (!(validateUserInput(days)));
        
        cout << "Daily room rate ($): \n";
        cin >> rate;

//Loop for rate validation
        do {
            cin >> rate;
            }while (!(validateUserInput(rate)));
       
        cout << "Lab fees and other service charges ($): \n";
        cin >> fees;

//Loop for fees validation
        do {
            cin >> fees;
            }while (!(validateUserInput(fees)));
       
        cout << "Medication charges ($): \n";
        cin >> charges;
        
//Loop for charges validation        
        do {
            cin >> charges;
            }while (!(validateUserInput(charges)));

//printing out total hospital bills from function call calcTotalCharges        
        cout << "Your total hospital bills is $" << calcTotalCharges(days, rate, fees, charges) << endl;
    }


//else if statement for patient option 'O', calls function validateUserInput to check if all values are above 0
     else if (patient == 'O') {
             
            cout << "Lab fees and other service charges ($): \n";
            cin >> fees;
            
//loop for fees validation            
            do {
            cin >> fees;
                }while (!(validateUserInput(fees)));
             

            cout << "Medication charges ($): \n";
            cin >> charges;
//loop for charges validation            
            do {
            cin >> charges;
                }while (!(validateUserInput(charges)));
    
//printing out total hospital bills from function call calcTotalCharges     
        cout << "Your total hospital bills is $" << calcTotalCharges(fees, charges) << endl;
    }

    return 0;
}

