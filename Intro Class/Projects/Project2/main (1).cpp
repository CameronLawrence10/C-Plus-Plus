//Cameron Lawrence
//CPSC 1020 (10:10 AM - 11:00 AM   MWF)
//Project 2
//This program is reading in questions for a quiz from a file using command line arguments
//4 Hours to writ program

//all needed libraries
#include "Quiz.h"
#include "printResult.h"
#include <iostream>
#include <ctime>
#include <sstream>
#include <string>
#include <iomanip>
#include <cstdlib>
#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;


int main( int argc, char const *argv[]) 
{
//vector    
    vector <Quiz> quizVector;
    string q;
    string a;
    string x;
    string y;
    string b;
    int right = 0;
    int w;
    int counter = 0;
    int wrong = 0;
    int score = 0;
    ifstream myfile;

    myfile.open(argv[1]);
//when my file is open getline for asnwer and response    
//gets rid of 3 characters before the output    
    if (myfile.is_open()) 
    {
        while (getline(myfile, x)) 
        {
            if(x.substr(0,2) == "A:") 
            {
                a = x.substr(3);
                counter--;
            quizVector.push_back(Quiz(q, a));
            if(x.substr(0,2) == "Q:") 
            {
                q = x.substr(3);
                counter++;
                getline(myfile, x); } } } }
            
//size of vector
    w = quizVector.size();
    int i = w - 1;

//srand for unsigned 
    srand(unsigned(time(0)));
//randomize shuffle between questions from beggining of question vector to the end    
    random_shuffle(quizVector.begin(), quizVector.end());

//testing for infinite / looping textfile questions
    if (counter == 11 || counter == 12 || counter == 13) {
        cout << "Wrong! Correct Answer: \n";
        counter--;
    }

    while (counter < 0) 
    {
        cout << quizVector[i].getAnswer() << endl;
        counter = 0; }

    while (0 <= i) 
    {
//print out fist question from random shuffle vector        
        cout << quizVector[i].getQuestion() << endl;
        cout << "Type in your answer: ";
        counter = i;
        getline(cin, y);
        
//when answer is correct increase score, and increment the right answer
        if (y == quizVector[i].getAnswer()) 
        {
            cout << "Correct!\n";
            right++;
            score = 1;
            counter++;
            quizVector[i].updateScore(score); }


//when answer is incorrect             
            else 
            {
                cout << "Wrong! Correct Answer: " << quizVector[i].getAnswer() << endl;
                wrong++;
                score = -1;
                counter--;
                quizVector[i].updateScore(score); }
            cout << "Current score: " << quizVector[i].getScore() << endl << endl;
            i--; }
//printing final results for amount of questions, correct, and wrong
        cout << printResult(w, right, wrong) << endl;
//closing database.txt
        myfile.close();

    return 0; }

