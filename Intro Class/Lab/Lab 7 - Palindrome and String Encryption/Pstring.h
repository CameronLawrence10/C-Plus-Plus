// Group Members: Steven Cabezas, James King, Tennare Jackson, Cameron Lawrence
// My Class: CPSC 1021 
// Date: 10/31/2022
// Desc: .h file for Pstring Class
// Time: 1 hour

#ifndef PSTRING_H_
#define PSTRING_H_

#include <iostream>
#include <string>

//PString class Decleration
class Pstring : public std::string
{
    public:
    bool isPalindrome(std::string p);
};
#endif
