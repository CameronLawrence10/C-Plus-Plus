/*
 * Name: Cameron Lawrence
 * Date Submitted: Feb 7
 * Lab Section: 003
 * Assignment Name: Linked List Based Stacks and Queues
 */
#include "IntegerArrayQueue.h"
using namespace std;

bool IntegerArrayQueue::enqueue(int value) {
    int num;
    //if queue is not filled 
    //front is to deque and back is to enque
    if ((front == 0 && back == size - 2 || back == front - 2 )) {
        return false;
    } 

    if (back == size - 1) {
        num = 0;
    } 
        else {
            num = back + 1;
        }
        back = num;
        //setting interArrayQueue value to array.... pointer to array of integers
        array[num] = value;
        return true;
}

int IntegerArrayQueue::dequeue() {
     //if the queue is not filled
     //front is to deque and back is to enque
    if(back == 0 && front == size - 1 || back == front - 1 ) {
       return 0;
    }
        else {
            int answer;
            answer = array[front];
            array[front] = 0;
    
    //front is maxed set to 0
    if (front == size) {
           front = 0;
    }
        else {
           front = front + 1;
        }
        return answer;
        }
}

