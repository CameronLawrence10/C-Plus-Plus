/*
 * Name: Cameron Lawrence
 * Date Submitted:
 * Lab Section: 003
 * Assignment Name: Linked List Based Stacks and Queues
 */
#ifndef LISTQUEUE_H
#define LISTQUEUE_H
#pragma once
#include "List.h"
#include <queue>


//This class represents a Queue implemented via Linked List
//Do not modify anything in the class interface
template <class T>
class ListQueue{

 private:
  List<T> queue;

 public:
  ListQueue();
  ~ListQueue();
  int size();
  bool empty();
  void enqueue(T);
  T dequeue();
   //Print the name and this ListQueue's size and values to stdout
  //This function is already implemented (no need to change it)
  void print(string name){
    queue.print(name);
  }

}; //end of class interface (you may modify the code below)

//Implement all of the functions below

//Construct an empty ListQueue by initializing this ListQueue's instance variables
template <class T>
ListQueue<T>::ListQueue(){
}

//Destroy all nodes in this ListQueue to prevent memory leaks
template <class T>
ListQueue<T>::~ListQueue(){
}

//Return the size of this ListQueue
template <class T>
int ListQueue<T>::size(){
  return this -> queue.size(); //return size
}

//Return true if this ListQueue is empty
//Otherwise, return false
template <class T>
bool ListQueue<T>::empty(){
  return this -> queue.empty(); //true if empty, otherise false
}

//Create a new node with value, and insert that new node
//into this ListQueue in its correct position
template <class T>
void ListQueue<T>::enqueue(T value){
  this -> queue.insertEnd(value); //inserting node of value
}

//Dequeue an element from the queue.
//Note that here that means both removing it from the list
//AND returning the value
template <class T>
T ListQueue<T>::dequeue(){
  int size = this -> queue.size(); //dequeuing element
  //this -> queue.removeStart();
  T get = this -> queue.getAt(0); 
  this -> queue.removeStart(); //remvove queue from list
  return get;
}

#endif //LISTQUEUE_H