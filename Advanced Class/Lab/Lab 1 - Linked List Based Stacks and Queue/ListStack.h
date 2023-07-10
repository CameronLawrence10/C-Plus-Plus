/*
 * Name: Cameron Lawrence
 * Date Submitted:
 * Lab Section: 003
 * Assignment Name: Linked List Based Stacks and Queues
 */
#ifndef LISTSTACK_H
#define LISTSTACK_H
#pragma once
#include "List.h"

//This class represents a Stack implemented via Linked List
//Do not modify anything in the class interface
template <class T>
class ListStack{

 private:
  List<T> stack;

 public:
  ListStack();
  ~ListStack();
  int size();
  bool empty();
  void push(T);
  T pop();
  //Print the name and this ListStack's size and values to stdout
  //This function is already implemented (no need to change it)
  void print(string name){
    stack.print(name);
  }

}; //end of class interface (you may modify the code below)

//Implement all of the functions below

//Construct an empty ListStack by initializing this ListStack's instance variables
template <class T>
ListStack<T>::ListStack(){
    //dont need anything here
}

//Destroy all nodes in this ListStack to prevent memory leaks
template <class T>
ListStack<T>::~ListStack(){
  this -> stack.~List(); //tilde to delete
}

//Return the size of this ListStack
template <class T>
int ListStack<T>::size(){
  return this -> stack.size(); //return size
}

//Return true if this ListStack is empty
//Otherwise, return false
template <class T>
bool ListStack<T>::empty(){
  return this -> stack.empty(); //return if stck is empty
}

//Create a node with value <value> and push it onto the stack
template <class T>
void ListStack<T>::push(T value){
  this -> stack.insertStart( value); //pushing value as node into list
}

//Pop a node from the Stack.
//Note that here that includes both removing the node from the stack
//AND returning its value.
template <class T>
T ListStack<T>::pop() {
  int rep = this -> stack.size();  //popping node from stack
  rep = rep - 1;
  T get = this -> stack.getAt(rep);
  this -> stack.removeStart(); //remove node from start
  return get;
}

#endif //LISTSTACK_H