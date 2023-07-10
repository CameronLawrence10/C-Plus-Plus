/*
 * Name: Cameron Lawrence
 * Date Submitted: April 18
 * Lab Section: 003
 * Assignment Name: Min-Heap Implementation Using a Vector
 */
#include <iostream>
#include "minHeap.h"

using namespace std;

void minHeap::siftUp(int pos) {
    int big = (pos-1)/2;
    int little = pos;
//while loop to compare the little and big  
    while(little!=0 && heap[big] > heap[little]) {
        int num = heap[big];
        heap[big] = heap[little];
        heap[little] = num;
//make little same as big and make new big 
        little = big;
        big = (big-1)/2;
    }
}

//if big is greater than left little or right little, sift down
void minHeap::siftDown(int pos) {
    int big = pos;
    int littleL = big * 2 + 1;
    int littleR = big * 2 + 2;
//changing big according the refrence of the little 
    if(littleL < heap.size() && heap[littleL] < heap[big]) {
        big = littleL;
    }
    if(littleR < heap.size() && heap[littleR] < heap[big]) {
        big = littleR; 
    }
    if(pos != big) {
        swap(heap[pos], heap[big]);
        siftDown(big);
    }
}

minHeap::minHeap(vector<int> data) {
//empty heap
    heap.resize(0);
    for(int i = 0; i < (int)data.size(); i++) {
        heap.push_back(data[i]);
    }
    for(int i = heap.size() - 1; i >= 0; i--) {
        siftDown(i);
    }  
}

//insert at leaf node and sift up to where is needed
void minHeap::insert(int value) {
    heap.push_back(value);
    siftUp((heap.size() - 1));
}

int minHeap::removeMin() {
//if heap is empty    
    if(heap.size() == 0) {
        return -1;
    }
    int num = heap[0];
    heap[0] = heap[heap.size() - 1];
    heap[heap.size() - 1] = num;
    heap.pop_back();
//sift down    
    siftDown(0);
    return num;
}

/*int main() { return 0; } */