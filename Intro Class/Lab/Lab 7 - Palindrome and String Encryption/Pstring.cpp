// Group Members: Steven Cabezas, James King, Tennare Jackson, Cameron Lawrence
// My Class: CPSC 1021 
// Date: 10/31/2022
// Desc: .cpp file for Palindrome Class
// Time: 1 hour

#include <iostream>
#include <string.h>
#include "Pstring.h"
#include <algorithm>

using namespace std;

//Pstring class Definition
bool Pstring::isPalindrome(string p)
{
    //assign p to x
    string x = p;
    //reverse the string p
    reverse(p.begin(),p.end());
    //if reverse string equals user string return true
    if (x == p)
    {
        return true;
    }
    else
    return false;
}