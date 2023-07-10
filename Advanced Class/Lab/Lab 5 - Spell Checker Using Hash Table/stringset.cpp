/*
 * Name: Cameron Lawrence
 * Date Submitted: Feb 28
 * Lab Section: 003
 * Assignment Name: Hash Table
 */
#include "stringset.h"
using namespace std;

Stringset::Stringset() : table(4), num_elems(0), size(4) {}

//Used in test cases and testStringset() in main.cpp, do not modify
vector<list<string> > Stringset::getTable() const
{
    return table;
}

//Used in test cases and testStringset() in main.cpp, do not modify
int Stringset::getNumElems() const
{
    return num_elems;
}

//Used in test cases and testStringset() in main.cpp, do not modify
int Stringset::getSize() const
{
    return size;
}

void Stringset::insert(string word) {
    int count;
    //if word isnt here 
    if (!find(word)) { 
        //had to change variable name to hash1 for the string hash, will be just hash for rest of functions
        int hash1;
        string Word1;
        hash<string> graph;
        //for size to make sure it isn't too large
        if ( size <=num_elems) { 
            size = size * 2;
            count++; 
            vector<list<string> > newTable(size);
            
            for (int i = 0; i < size / 2; i++) {
                //looping for new hash table
                for(list<string>::const_iterator iterator = table[i].begin(); iterator != table[i].end(); ++iterator) {
                    Word1 = *iterator;
                    hash1 = graph(Word1) % size;
                    newTable[hash1].push_back(Word1);
                    table[i].remove(word);
                }
            }
            table = newTable; 
        }
        hash1 = graph(word) % size;
        count++;
        table[hash1].push_back(word);
        //after, increment num
        num_elems++;
    }
}

bool Stringset::find(string word) const {
    hash<string> hash;
    int check = hash(word) % size;
    //run through the table and return true if found, else just return false
    for (auto iterator = table[check].begin(); iterator != table[check].end(); iterator++) {
        if(*iterator == word) {
            return true;
        }
    }
    return false; 
}

void Stringset::remove(string word) {
   //checking for where the hash is and removing the string
    if (find(word)) { 
        hash<string> graph;
        hash<string> graph1;
        int hash = graph(word) % size;
        table[hash].remove(word);
        //in stringset.h, decrease
        num_elems--;
    }
    else {
        return;
    } 
}