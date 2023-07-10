// Group Members: Steven Cabezas, James King, Tennare Jackson, Cameron Lawrence
// My Class: CPSC 1021 
// Date: 10/31/2022
// Desc: Main file for Palindrome Assignment
// Time: 1 hour

#include <iostream>
#include <string.h>
#include "Pstring.h"
using namespace std;

int main()
{
    Pstring pstring;
     //Create Variable
    string p;

    //Get user input
    cout << "This is a palindrome-testing program. Enter a string to test: " << endl;
    cin >> p;
    //is true output that is is palindrome
    if ( pstring.isPalindrome(p)== true)
    {
        cout << p << " is a palindrome " << endl;
    }
    // if false output that it is not palindrome
    else 
    {
        cout << p << " is not a palindrome" << endl;
    }

    return 0;
}