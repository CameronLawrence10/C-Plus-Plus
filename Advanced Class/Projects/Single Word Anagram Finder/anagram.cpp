/*
 * Name: Cameron Lawrence
 * Date Submitted: March 8
 * Assignment Name: Anagram 
 */

#include <iostream>
#include <fstream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

vector<string> loadWordlist(string filename);

/*Implement the following function:
  anagram() takes a word (string) and a wordlist of all words (vector of strings)
  and builds a dictionary/map where the key is a specific number of times each
  letter occurs in a word and the associated value is a vector of strings
  containing all words using those letters (anagrams).
  The value returned is a vector of strings containing the corresponding
  set of anagrams
*/
vector<string> anagram(string word, vector<string> wordlist);

/*int main()
{
    vector<string> words;
    vector<string> anagrams;
    string inputWord;
    words=loadWordlist("wordlist.txt");
    cout << "Find single-word anagrams for the following word: ";
    cin >> inputWord;
    anagrams = anagram(inputWord, words);
    for (int i=0; i<anagrams.size(); i++)
    {
        cout << anagrams[i] << endl;
    }
    return 0;
}*/


vector<string> loadWordlist(string filename)
{
    vector<string> words;
    ifstream inFile;
    string word;
    inFile.open(filename);
    if(inFile.is_open())
    {
        while(getline(inFile,word))
        {
            if(word.length() > 0)
            {
                words.push_back(word);
            }
        }
        inFile.close();
    }
    return words;
}

//Implement this function
vector<string> anagram(string word, vector<string> wordlist) {
   //starting the map and strings, along with int for the size
    string change;
    string changeup;
    int num = wordlist.size();
    int num2 = 0;
    int i = 0;
    vector<string> changed; 
//don't forget to include the library for unordered map
    unordered_map<string, vector<string> > map;
    
//for loop to sort through all of the characters and inout them into the list
    for(i = 1; num >= i; i++) {
        change = wordlist[i];
		sort(change.begin(), change.end());
		map[change].push_back(wordlist[i]);
    }
        num2++;
    
//sort from the begginging to the end and then changed = the word, return that word
    sort(word.begin(), word.end());
	changed = (*(map.find(word))).second;
	return changed;
}