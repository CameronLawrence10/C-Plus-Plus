//Cameron Lawrence
//CPSC 1020 (10:10 AM - 11:00 AM   MWF)
//Project 2
//This program is reading in questions for a quiz from a file using command line arguments
//4 Hours to writ program

#ifndef PRINTRESULT_H
#define PRINTRESULT_H
#include <string>
#include <ctime>
#include <cstdlib>

//no using namespace std
//function for printing result using stringstream to return a string 
std::string printResult(int questions, int correct, int wrong);

#endif //PRINTRESULT_H