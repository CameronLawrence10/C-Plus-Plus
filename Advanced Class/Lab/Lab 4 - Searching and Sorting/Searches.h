/*
 * Name: Cameron Lawrence
 * Date Submitted: Feb 20
 * Lab Section: 003
 * Assignment Name: Searches and Sorts
 */

#pragma once
#include <iostream> 
#include <vector>
#include <cstdlib>
#include <algorithm>
using namespace std;

template <class T>
int linearSearch(std::vector<T> data, T target) {
    for (int i = 0; i < data.size(); i++){
        cout << data[i];
        cout << endl;
        
        if(data[i] ==  target) {
            return i;
        } 
    }
    return (-1);
}



template <class T>
int binarySearch(std::vector<T> data, T target) {
    sort(data.begin(), data.end());
    int counter = 0;
    int end = 0;
    int begin = data.size()-1;
    
    while(end <= begin){
        int mid = (begin + end) / 2;

       if(data[begin] == target) {
            counter++;
       }

        if(data[end] == target) {
            counter--;
       }

        if(data[mid] == target) {
            return mid;
        }

            else if(target > data[mid]) {
                end = mid + 1;
            }

                else{
                    begin = mid - 1;  
                }
    }
    return (-1);
}