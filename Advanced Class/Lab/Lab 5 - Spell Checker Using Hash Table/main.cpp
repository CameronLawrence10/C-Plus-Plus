 /*
 * Name: Cameron Lawrence
 * Date Submitted: Feb 28
 * Lab Section: 003
 * Assignment Name: Hash Table
 */
 #include "stringset.h"
 #include <iostream>
 #include <fstream>
 using namespace std;
 
 void testStringset(Stringset& words);
 void loadStringset(Stringset& words, string filename);
 vector<string> spellcheck(const Stringset& words, string word);
 
 /*int main() {
     Stringset wordlist;
     testStringset(wordlist);
     return 0;
 }*/
 
 
 void testStringset(Stringset& words) {
     string choice;
     string word;
     do {
         cout << "I: insert word" << endl;
         cout << "F: find word" << endl;
         cout << "R: remove word" << endl;
         cout << "P: print words in stringset" << endl;
         cout << "Q: quit" << endl;
         cin >> choice;
         switch (choice[0]) {
             case 'I':
             case 'i':
                cout << "Enter word to insert: ";
                cin >> word;
                words.insert(word);
                break;
             case 'F':
             case 'f':
                cout << "Enter word to find: ";
                cin >> word;


                if (words.find(word)) {
                    cout << word << " in stringset" << endl;
                }
                    else {
                    cout << word << " not in stringset" << endl;
                    }
                break;
             case 'R':
             case 'r':
                cout << "Enter word to remove: ";
                cin >> word;
                words.remove(word);
                break;
             case 'P':
             case 'p':
                vector<list<string> > t = words.getTable();
                int numWords = words.getNumElems();
                int tSize = words.getSize();
                for(int i=0; i<tSize; ++i)
                {
                    list<string>::iterator pos;
                    for (pos = t[i].begin(); pos != t[i].end(); ++pos)
                    {
                        cout << *pos << endl;
                    }
                }
                cout << "Words: " << numWords << endl;
         }
     } while (choice[0] != 'Q' && choice[0] != 'q');
 }
 
 void loadStringset(Stringset& words, string filename) {
     //Implement this function
    string word2;
    //opening up file and getting words
    ifstream infile(filename);
    string letter;
        while(getline(infile, letter)) {
            words.insert(letter);
        }
 }
 
 vector<string> spellcheck(const Stringset& words, string word) {
     //Implementing this function
     string example;
     vector<string> table; 
     string change = word; 
     //two for loops to loop through each char in the word then running it through the alphabet
     for (int i = 0; i < word.length(); i++) { 
         for (char x = 'a'; x < 'z' + 1; x++) { 
             change.replace(i, 1, 1, x); 
             if(words.find(example) && example != word ) {
                example = word;
             }
             
             //the changed word for checking if word is not valid
             if (words.find(change) && change != word) 
                table.push_back(change);
             change = word;
             example = word;
         }
     }
     return table;
 }