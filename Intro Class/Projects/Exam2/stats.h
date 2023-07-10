//Cameron Lawrence
//Programming Exam#2
//This program reads in numbers from a text file based off of the fibonacci sequence and does different actions with the integers
//3 Hours

#ifndef STATS_H_
#define STATS_H_
#include <vector>
#include <fstream>
#include <string>
using namespace std;

class Stats  {
    private:
        vector <int> num;
        string file;
        
    
    public:
//empty string is ""        
        Stats();
        Stats(string file);
        int capacity();
        int count();
        int countEven();
        int countOdd();
        int countFib();
        float avgAll();
        float avgEven();
        float avgOdd();
        float avgFib();
};
#endif //STATS_H_