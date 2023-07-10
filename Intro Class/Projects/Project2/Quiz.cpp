//Cameron Lawrence
//CPSC 1020 (10:10 AM - 11:00 AM   MWF)
//Project 2
//This program is reading in questions for a quiz from a file using command line arguments
//4 Hours to writ program

#include <iostream>
#include <string>
#include "Quiz.h"

//setting quiz score to default of 0
    int Quiz :: score = 0;
    int counter = 1;

//getting score and returning score of questions correct 
    int Quiz :: getScore() 
        { return score; }

//getting answer and returning answer of textfile / user        
    std :: string Quiz :: getAnswer()
        { return answer; }

//getting question and returning question    
    std :: string Quiz :: getQuestion()
       { return question; }

    void Quiz :: updateScore(int val) 
        {
            score += val;
            
//score cannot be less than 0, so when less than 0, set score to 0            
            if (0 > score)
            { score = 0;
              counter++; } }

