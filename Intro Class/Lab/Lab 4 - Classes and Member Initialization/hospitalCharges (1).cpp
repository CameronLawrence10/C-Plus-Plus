//Cameron Lawrence
//CPSC 2021 (M,W 2:30 - 3:20)
//James King, Tenarre Jackson, Steven Caebzas
//This program is written with classes to calculate the total patient/hopsital charges 

#include "Patient.h"
#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;

int main() 
{
//all variables for either 'I' or 'O'
	int days;
	double dailyRate;
	double services;
	double charges;
	char user; 
	Patient patient;
	
//asking user for input of wether he or she is a inpatient or outpatient
	cout << "This program will calculate a patient's hospital charges.\n";
    cout << "Enter I for in-patient or O for out-patient: \n";
//reading in user choice
	cin >> user;

//while loop if incorrect input, ask to try again and loop to read use input until correct
	while (user != 'O' || user != 'I') {
		cout << "Try again, Enter either I or O\n";
		cin >> user;
	}

//if user input is 'I'
	if (user == 'I') {

//for validation of input
		patient.setPatientType(user);
    	
		cout << "Number of days in the hospital: \n";
		cin >> days;
//for validation of input
		patient.setDays(days);

		cout << "Daily room rate ($): \n";
		cin >> dailyRate;
//for validation of input
		patient.setRate(dailyRate);

		cout << "Lab fees and other service charges ($): \n";
		cin >> services;
//for validation of input
		patient.setServices(services);
		
		cout << "Lab fees and other service charges ($): \n";
		cin >> charges;
//for validation of input
		patient.setMedication(charges);

		cout << fixed << setprecision(2) << "Your total hospital bills is $" << patient.calcTotalCharges() << endl;
}

//else if user is 'O'
		else if (user == 'O') {
//for validation of input
			patient.setPatientType(user);

			cout << "Lab fees and other service charges ($): \n";
			cin >> services;
//for validation of input
			patient.setServices(services);

			cout << "Lab fees and other service charges ($): \n";
			cin >> charges;
//for validation of input
			patient.setMedication(charges);

			cout << fixed << setprecision(2) << "Your total hospital bills is $" << patient.calcTotalCharges() << endl;
		}
//end program	
	return 0;
}



    	
		