//Cameron Lawrence
//Project 1
//This project determines covid procedures based on positive and negative results, including other factors to determine isolation period
#include "calcDays.h"
#include "Date.h"
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {

    int day;
    int month;
    int year;
    char test;
    
//asking user for positive or negative results, reading it into char test    
    cout << "Are you Positive (P) or Negative (N) for Covid?\n";
    cin >> test;
//while loop testing for valid choice of test, either 'P' or 'N'    
    while (test != 'P' && test != 'N') {
        cout << "Not a valid choice, please pick 'P' or 'N'\n";
        cin >> test;
    }

//******************      CASE 1     *******************************
//if user tests positive for covid, ask the date and validate through datePositive
    if (test == 'P') {
        cout << "Enter the month you were tested positive for covid, like (MM)\n";
        cin >> month;
        cout << "Enter the day you were tested positive for covid, like '(DD)'\n";
        cin >> day;
        cout << "Enter the year you were tested positive for covid, like '(YYYY)'\n";
        cin >> year;
//validation of date        
        Date datePositive(month, day, year); 
//printing out results for positive user
        cout << "Test result: positive\n";
        cout << "Date tested positive: " << datePositive.showDate() << endl;
        cout << "Length of isolation: 5 days\n";
    }


//******************      CASE 2     *******************************   
    else if (test == 'N') {

        char around;

        cout << "At any time were you exposed or around anyone who had covid?   'Y' for yes and 'N' for no.\n";
        cin >> around;
//while loop testing for validation of yes or no to around people with covid        
        while(around != 'Y' && around != 'N') {
            cout << "Not a valid choice, enter 'Y' or 'N'\n";
            cin >> around;
        }

//******************      CASE 3    *******************************  
//user was not exposed or around people with covid
        if (around == 'N') {
            cout << "Test result: negative\n";
            cout << "Exposed to postive case: No\n";
            cout << "Length of isolation: 0 days\n";
        }

//user was exposed or around people with covid
        else if (around == 'Y') {
            char dosage;

            cout << "Enter the month you were exposed or around covid, like (MM)\n";
            cin >> month;
            cout << "Enter the day you were exposed or around covid, like '(DD)'\n";
            cin >> day;
            cout << "Enter the year you were exposed or around covid, like '(YYYY)'\n";
            cin >> year;
//checking for validation of date
            Date dateExposed(month, day, year);

            cout << "Have you gotten the 2nd dosage for the vaccination? 'Y' for yes 'N' for no.\n";
            cin >> dosage;
        
//while loop validating input for 2nd dosage of vaccine            
            while (dosage != 'Y' && dosage != 'N') {
                cout << "Not a valid choice, enter 'Y' or 'N'\n";
                cin >> dosage;
            }

//the user has not recieved the second dosage of the vaccine
            if (dosage == 'N') {
                cout << "Test result: negative\n";
                cout << "Exposed to postive case: Yes\n";
                cout << "Date exposed to positive test case: " << dateExposed.showDate() << endl;
                cout << "Second vaccination dose received: No\n";
                cout << "Vaccination status at time of exposure: not fully vaccinated\n";
                cout << "Length of isolation: 10 days\n";
            }

//******************      CASE 4    *******************************        
//user has recieved the second dosage of the vaccine
            else if (dosage == 'Y') {
                cout << "Enter the month you got the second dosage, like (MM)\n";
                cin >> month;
                cout << "Enter the day you got the second dosage, like (DD)\n";
                cin >> day;
                cout << "Enter the month you got the second dosage, like (YYYY)\n";
                cin >> year;
//validating date of the second dosage                 
                Date dateSecondDose(month, day, year);

//user has dosage but is not fully vaccinated
                if (calcDays(dateExposed, dateSecondDose) < 14) {
                    cout << "Test result: negative\n";
                    cout << "Exposed to positive case: Yes\n";
                    cout << "Date exposed to positive case: " << dateExposed.showDate() << endl;
                    cout << "Second vaccination does received: Yes\n";
                    cout << "Date second vaccination dose received: " << dateSecondDose.showDate() << endl;
                    cout << "Vaccination status at time of exposure: not fully vaccinated\n";
                    cout << "Length of isolation: 10 days\n";
                }
//user has dosage and has been fully vaccinated
                else {
                    cout << "Test result: negative\n";
                    cout << "Exposed to positive case: Yes\n";
                    cout << "Date exposed to positive case: " << dateExposed.showDate() << endl;
                    cout << "Second vaccination does received: Yes\n";
                    cout << "Date second vaccination dose received: " << dateSecondDose.showDate() << endl;
                    cout << "Vaccination status at time of exposure: fully vaccinated\n";
                    cout << "Length of isolation: 5 days\n";
                }
            
            }
        }
    }

    return 0;
}