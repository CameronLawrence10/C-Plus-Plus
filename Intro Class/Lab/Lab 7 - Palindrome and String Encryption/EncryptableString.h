// Group Members: Steven Cabezas, James King, Tennare Jackson, Cameron Lawrence
// My Class: CPSC 1021 
// Date: 10/31/2022
// Desc: .h file for EncryptableString Class
// Time: 1 hour

#ifndef ENCRYPTABLE_H_
#define ENCRYPTABLE_H_

#include <iostream>
#include <string>

using namespace std;

//Encrytable String Class Decleration
class EncryptableString : public string
{
    public:
    EncryptableString(string stringObj);
    void encrypt();
    string s;
};

#endif