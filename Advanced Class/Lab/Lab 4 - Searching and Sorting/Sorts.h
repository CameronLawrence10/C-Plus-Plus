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
using namespace std;


template <class T>
std::vector<T> quickSort(std::vector<T> lst) {
    //must be 2 numbers or above
    if (1 >= lst.size()) {
        return lst;
    }

    //srand for random
    //the index for the pivot value is selected at random
    srand(time(0));
    int value = rand() % lst.size();
    T change = lst[value];
    lst.erase(lst.begin() + value);

    //creating, start, middle, and end for recursive calls
    vector<T> end;
    vector<T> middle;
    vector<T> start;

//bigger vector
    for(int i = 0; i < lst.size(); i++) {
        if(lst[i] < change) {
            start.push_back(lst[i]);
        }

//for test cases when it is exactl equal to middle
            else if(lst[i] == change) {
                middle.push_back(lst[i]);
            }
//smaller vector   
                else {
                    end.push_back(lst[i]);
                }
    }

//recursive and clear the current vector
    start = quickSort(start);
    end = quickSort(end);
    lst.clear();

    //push all elements back into the vector based on start or end
    for(int i = 0; i < start.size(); i++) 
        lst.push_back(start[i]);
        lst.push_back(change);

    for(int i = 0; i < middle.size(); i++)
        lst.push_back(middle[i]);

    for(int i = 0; i < end.size(); i++) 
        lst.push_back(end[i]);
        return lst;
    
}

//helper function
template <class T>
std::vector<T> mergeSort(std::vector<T> lst, int end, int start) { 
    vector<T> change;
    if(end == start) {
        change.push_back(lst[end]);
        return change;
    }

    //recursive and sorting them into mid1 and mid2
    int mid = (end + start) / 2;
    vector<T> mid1 = mergeSort(lst, end, mid);
    vector<T> mid2 = mergeSort(lst, mid + 1, start);
    int x = 0;
    int y = 0;

    //run through the list of size of mid1 and mid2 comparing them to index
    while(x < mid1.size() && y < mid2.size()){

        if(mid1[x] < mid2[y]){
            change.push_back(mid1[x]);
            x++;
        }
   
        else {
            change.push_back(mid2[y]);
            y++;
        }
    }
    //any leftovers, add them to end
    while(x < mid1.size()){
        change.push_back(mid1[x]);
        x++;
    }
    //any leftovers, add them to end
    while(y < mid2.size()){
        change.push_back(mid2[y]);
        y++;
    }
    return change;
}

template <class T>
std::vector<T> mergeSort(std::vector<T> lst) {
    int end = 0;
    int begin = lst.size() - 1;
    return mergeSort(lst, end, begin);
}

