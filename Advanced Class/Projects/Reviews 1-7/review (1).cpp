#include "review.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

//REVIEW 1 *************************
//Read In first review assingment
void ReadStdIn() {

    int num;
    double d;
    string word;

//reading in int, double, and string
    cin >> num;
    cin >> d;
    cin >> word;
    cout << num << endl;
    cout << d << endl;
    cout << word << endl;
}


//REVIEW 2 **********************************
int WriteOut(int out) {
    cout << out << endl;
    return 2;
}

int WriteOut(double out) {
    cout << out << endl;
    return 3;
}

int WriteOut(string out) {
    cout << out << endl;
    return 1;
}

//REVIEW 3 **************************

//class Read {
   // public: 
        void ReadStdIn2() {
            char letter;
            string word;
            int counter = 0;
            while(word != "q") {
                cin >> word;
                counter++;
 
            }
                cout << counter-1 << endl;
        }

//};


//REVIEW 4 **************************

void ReadWrite() {
    string name;
    vector <string> word;
    
    cin >> name;
    while(name != "q") {
        word.push_back(name);
        cin >> name;
        
    }
    for (string word2 : word) {
        cout << word2 << " ";
        
    }
    cout << endl; 
}

//REVIEW 5 ****************************

    vector <int> InitializeArray(int num) {
        vector <int> fill(num, 0);
        return fill;
}

//REVIEW 6 *****************************

void LoopThrough(double * ref, int num) {
    for(int i = 0; i < num; ++i) { ref[i] = ref[i] + 1; }
}


//REVIEW 7 *******************

int Fibonacci(int a){
    int fib[a];
    fib[0] = 0;
    fib[1] = 1;
    fib[2] = 2;
    fib[10] = 10;
    //fib[-1] = 0;
    //test just incase for gradescope

    for(int i = 2; i <= a; i++){ fib[i] = fib[i-2] + fib[i-1]; }

    return fib[a];
}










