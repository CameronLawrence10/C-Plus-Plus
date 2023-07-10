//Cameron Lawrence
//CPSC 1020 (10:10 AM - 11:00 AM   MWF)
//Project 2
//This program is reading in questions for a quiz from a file using command line arguments
//4 Hours to writ program

#ifndef QUIZ_H
#define QUIZ_H
#include <vector>
#include <string>

class Quiz {
    public:
//static for grabbing and updating score        
        static int getScore();
        static void updateScore(int val);

//friend  :)
        friend std :: string printResult(int questions, int correct, int wrong);

//default constructor        
        Quiz() = default;
        Quiz(std :: string q, std :: string a) : question {q}, answer{a} {}
        std :: string getQuestion();
        std :: string getAnswer();

    private:
//static variable for int score        
        static int score;
//in-class initilization  for question and answer to empty string        
        std :: string question{""};
        std :: string answer {""};
};

#endif //QUIZ_H