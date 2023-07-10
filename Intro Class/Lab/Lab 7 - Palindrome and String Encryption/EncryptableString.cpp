// Group Members: Steven Cabezas, James King, Tennare Jackson, Cameron Lawrence
// My Class: CPSC 1021 
// Date: 10/31/2022
// Desc: .cpp file for EncryptableString Class
// Time: 1 hour

#include <iostream>
#include "EncryptableString.h"

using namespace std;
//Encrytable String Class Defintion

EncryptableString::EncryptableString(string stringObj)
{
    s = stringObj;
}

void EncryptableString::encrypt()
{

    for (unsigned int i = 0; i < s.length(); i++)
    {
        //if char is between a and z go to next string
        if ((s[i] >= 'a' && s[i] < 'z') || (s[i] >= 'A' && s[i] < 'Z'))
        {
            s[i] += 1;
        } 
        //if string is z go to a
        else if (s[i] == 'z' || s[i] == 'Z')
        {
            s[i] -= 25;
        }
    }
}