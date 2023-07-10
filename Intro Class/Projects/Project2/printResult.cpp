//Cameron Lawrence
//CPSC 1020 (10:10 AM - 11:00 AM   MWF)
//Project 2
//This program is reading in questions for a quiz from a file using command line arguments
//4 Hours to writ program

#include <iostream>
#include <ctime>
#include <sstream>
#include <string>
#include "printResult.h"
#include "Quiz.h"

//function for printing result using stringstream to return a string 
std :: string printResult(int questions, int correct, int wrong) 

//string stream    
  {  std :: stringstream rr;

//outputting string stream to user in formatted order
//# of questions and # of correct answers
    rr << "Number of questions: " << questions << std :: endl;
    rr << "Number correct answers: " << correct << std :: endl;
//# of answers wrong and final score of textfile / user
    rr << "Number wrong answers: " << wrong << std :: endl;
    rr << "Final Score: " << Quiz :: getScore() << std :: endl;

//returning string stream
return rr.str(); }