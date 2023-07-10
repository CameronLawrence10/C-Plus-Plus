/*
 * Name: Cameron Lawrence
 * Date Submitted: Feb 28
 * Lab Section: 003
 * Assignment Name: Hash Table
 */
#pragma once

#include <string>
#include <vector>
#include <list>
using namespace std;

//Stringset class, do not modify definitions for existing members
class Stringset
{
    private:
        vector<list<string> > table;
        int num_elems;
        int size;
    public:
        Stringset();
        vector<list<string> > getTable() const;
        int getNumElems() const;
        int getSize() const;
        void insert(string word);
        bool find(string word) const;
        void remove(string word);
};