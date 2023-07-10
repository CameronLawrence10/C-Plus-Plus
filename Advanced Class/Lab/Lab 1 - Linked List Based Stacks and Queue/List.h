/*
 * Name: Cameron Lawrence
 * Date Submitted:
 * Lab Section: 003
 * Assignment Name: Linked List Based Stacks and Queues
 */
#pragma once

#include <iostream>
#include <string>
#include "Node.h"
using namespace std;

//This class represents a linked list of node objects
//Do not modify anything in the class interface
template <class T>
class List{

 private:
  Node<T> * start; //pointer to the first node in this list
  int mySize;  //size (or length) of this list

 public:
  List();
  ~List();
  int size();
  bool empty();
  void insertStart(T);
  void insertEnd(T);
  void insertAt(T, int);
  void removeStart();
  void removeEnd();
  void removeAt(int);
  T getFirst();
  T getLast();
  T getAt(int);
  int find(T);

  //Print the name and this list's size and values to stdout
  //This function is already implemented (no need to change it)
  void print(string name){
    cout << name << ": ";
    cout << "size = " << size();
    cout << ", values = ";
    Node<T> * iterator = start;
    while(iterator != nullptr){
      cout << iterator->value << ' ';
      iterator = iterator->next;
    }
    cout << endl;
  }

}; //end of class interface (you may modify the code below)

//Implement all of the functions below
//Construct an empty list by initializing this list's instance variables
template <class T>
List<T>::List(){
  start = nullptr;
  mySize = 0; //setting size to 0
}

//Destroy all nodes in this list to prevent memory leaks
template <class T>
List<T>::~List(){
    Node<T> *node = start; //creating new node
  while(node != nullptr) { //looping for anything but start of the list
    Node<T> *next = node -> next;
    delete node; //delete node
    node = next; 
  }
}

//Return the size of this list
template <class T>
int List<T>::size(){
  return mySize; //return side of list
}

//Return true if this list is empty
//Otherwise, return false
template <class T>
bool List<T>::empty(){
  return start ==  nullptr; //empty list
}

//Create a new node with value, and insert that new node
//into this list at start
template <class T>
void List<T>::insertStart(T value){
  Node<T> *node = new Node<T>(value); //need node value
  if (empty()) {
    start = node;  //setting start to new node
    node -> next = nullptr; //insert at node
  }
    else {
        node -> next = start;
        start = node;
    }
  mySize++; 
}

//Create a new node with value, and insert that new node
//into this list at end
template <class T>
void List<T>::insertEnd(T value){
  /*Node<T> *end = new Node<T>(value);
  if(empty()){
    start = end; 
    mySize++; 
  } */
        Node<T> * iterator = start;
    if (empty() == true) { //empty list then
        start = new Node<T>(value);
    } else {
        while (iterator->next != nullptr) { //looping for when node is not nullptr
            iterator = iterator->next;
        }
        iterator->next = new Node<T>(value);
    }
    mySize++; //increment size
}


//Create a new node with value <value>, and insert that new node at position j
template <class T>
void List<T>::insertAt(T value, int j){
      Node<T> * node = new Node<T>(value); //new node for dynamically allocated space for value
    Node<T> * it = start;
    if (j == 0) {
        insertStart(value); //inseerting at position j
    } else {
        for (int i = 0; i < j-1; i++) {
            it = it -> next;
        }
        Node<T> * oldNode = it -> next; //old node created to replace
        it -> next = node;
        node -> next = oldNode;
    }
    mySize++;
}

//Remove node at start
//Make no other changes to list
template <class T>
void List<T>::removeStart(){
  if(start == nullptr) //if start is null, end
    return;

    else if (start != nullptr) { //if start is not null then create new node and remove node at start
        Node <T> *node = start;
        start = start -> next;
        delete node;
        mySize--;
    }
}

//Remove node at end
//Make no other changes to list
template <class T>
void List<T>::removeEnd() {
if(mySize == 1) {
    removeStart();
  }
    else if(start == nullptr){
        return;
    }
        else{
            Node<T> *node = start; //new node at start
            for(int i = 0; i < mySize - 2; i++){ //looping for end of list
                node = node -> next;
            }
            
            Node<T> *test = test;
            Node<T> *bye = node -> next; //testing node, remove at end
            node -> next = nullptr;
            delete test;
            delete bye; //delete node 
            mySize--;
        }
}


template <class T>
void List<T>::removeAt(int j){
/*if(j == 0){
    removeStart();
  }
  else if(j >= mySize){
    removeEnd();
  }
  else if(start == nullptr){
    return;
  */
      Node<T> * node = start;
    for (int i = 0; i < j-1; i++) { //check for j being first and last element
        node = node -> next;        //then function
    }
    Node<T> * temp = node -> next;
    node -> next = node -> next -> next;
    delete temp;
    mySize--;
}

//Return the value of the first node in the Linked List,
//If no first node, return the default constructed value: T()
template <class T>
T List<T>::getFirst(){
    if(mySize == 0) { //if size is 0
        return T(); //constructed value T
    }
        else {
            return start -> value; //returning first value of list at start
        }
}

//Return the value of the last node in the Linked List,
//If no first node, return the default constructed value: T()
template <class T>
T List<T>::getLast(){
    if(start == nullptr) {
        return T(); // default T
    }
        else if (start != nullptr) { //reutnring last node
            Node<T> *node = start;
            while(node -> next != nullptr){ //looping for last node
                node = node -> next;
            }
    return node -> value;
  }
}

//Return the value of the node at position j in the Linked List,
//If no first node, return the default constructed value: T()
template <class T>
T List<T>::getAt(int j){
    Node<T> * it = start;
    if(mySize == 0) {
        return T(); //default constructed value
    } else {
        for (int i = 0; i < j; i++) { //loop for j in list
            it = it -> next;
        }
        return it -> value;
    }

}

//Return the position of the (first) node whose value is equal to the key
//Otherwise, return -1
template <class T>
int List<T>::find(T key){
  int counter;
  counter = 0; //counter to increment
  Node<T> *node = start;
  while(node != nullptr){ //looping for value equal to the key
    if(node -> value == key){
      return counter;
    }
    node = node -> next;
    counter++; //increment counter
  }
  
  return -1; //returning  minus 1
}