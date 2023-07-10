//Cameron Lawrence
//Programming Exam#2
//This program reads in numbers from a text file based off of the fibonacci sequence and does different actions with the integers
//3 Hours

#include <string>
#include <iostream>
#include <vector>
#include <iomanip>
#include <cmath>
#include "stats.h"
using namespace std;

Stats :: Stats()
{
    int i = 0;
    for(i = 0; i < 100; i++){ num.push_back(0); }
    file = "";
}

Stats :: Stats(string X)
{
    ifstream myFile(X);
    int Y = 0;
    if(myFile.is_open()) {
        while(!myFile.eof()) {
                myFile >> Y;
                num.push_back(Y); } }

    myFile.close();
    file = X;
}

int Stats :: capacity() { return 100; }

int Stats :: count() { return num.size() -1; }

int Stats :: countEven() 
{
    int X;
    int i = 0;
    for (i = 0; num.size() > i; i++) {
        if (num.at(i) % 2 == 0) { X++; } } 
return X;
}

float Stats :: avgEven() 
{
    int X = 0;
    int w = 0;
    int A = 0;
    int i = 0;
    for(i = 0; num.size() > i; i++){
        if(num.at(i) % 2 == 0) {A = num.at(i) + A; X++; } }
        if(num.at(i) / 2 != 1) { w = 0; w++; }
        A = A / X;
        return A;
}

int Stats :: countOdd() 
{
    int Y;
    int i = 0;
    for (i = 0; num.size() > i; i++) {
        if (num.at(i) % 2 != 0) { Y++; } } 
return Y;
}

float Stats :: avgOdd() {
    int X = 0;
    int w = 0;
    int A = 0;
    int i = 0;
    for(i = 0; num.size() > i; i++){
        if(num.at(i) % 2 != 0) {A = num.at(i) + A; X++; } }
        if(num.at(i) / 2 != 1) { w = 0; w++; }
        A = A / X;
        return A;
}

float Stats :: avgAll() 
{
     float A = 0;
    int i = 0;
    float C = count();
    for(i = 0; num.size() > i; i++) { A = num.at(i) + A; }
    float B = A / C;
    return B;
}

int Stats :: countFib() 
{
    int total, X, Y, W;
    int i = 0;
    for (i = 0; num.size() > i; i++) {
        W = num.at(i);
        X = sqrt (5.0 + 4.0 * W * W);
        Y = sqrt (5.0 - 4.0 * W * W);
        if (X == sqrt(1.0 + 9.0 * W * W)  && Y == sqrt(1.0 - 9.0 * W * W)) { W = 0;}
        if (X == sqrt (5.0 + 4.0 * W * W) || Y == sqrt(5.0 - 4.0 * W * W)) { total++; } }
return total;
}

float Stats :: avgFib() 
{
    float A = 0;
    int X = 0;
    int Y, W, V;
    int i = 0;
    for(i = 0; num.size() > i; i++){
        V = num.at(i);
        Y = sqrt (5.0 + 4.0 * V * V);
        W = sqrt (5.0 - 4.0 * V * V);
            if (X == sqrt(1.0 + 9.0 * W * W)  && Y == sqrt(1.0 - 9.0 * W * W)) { W = 0;}
            if (Y == sqrt (5.0 + 4.0 * V * V) || W == sqrt(5.0 - 4.0 * V * V)) { A = V + A; X++; } }

return A / X;
}