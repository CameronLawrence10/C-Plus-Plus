/*
 * Name: Cameron Lawrence
 * Date Submitted: April 26
 * Lab Section: 003
 * Assignment Name: Word Ladder
 */
#include <iostream>
#include <fstream>
#include <vector>
#include <unordered_map>
#include <queue>
using namespace std;

vector<string> V; //words from wordlist05.txt
//Global variables for bfs distance, bfs predecessor, and neighboring nodes
//Should be unordered_map type
unordered_map<string, bool> num;
unordered_map<string, vector<string>> close;
unordered_map<string, int> length2;
unordered_map<string, string> before;
void graph();
int PF(string, string, vector<string>&);

void graph(void) {
//open the file and create string for the word   
  ifstream list ("wordlist05.txt");
  string picked;
//go through the file
  while(list >> picked) {
    V.push_back(picked);
  }
  for(auto picked2 : V) {
    for(int i = 0; i < picked2.length(); i++) {
 //for loop going from a to z and incrementing to and find the word     
      for(char letters = 'a'; letters <= 'z'; letters++) {
        if(letters == picked2.at(i)) { continue; }
          string change = picked2;
          change.at(i) = letters;
          close[picked2].push_back(change);    
      }
    }
  }
}

//implement this, don't forget helper function for building the graph
void wordLadder(string s, string t, int &steps, vector<string> &p) {
  graph();
  queue<string> numGo;
//count words, for test cases, delete after  
  int count = 0;
  length2[s] = 0;
  numGo.push(s);
  num[s] = true;
    
//run through all words while not empty
  while (!numGo.empty()) {
    string picked = numGo.front();
    numGo.pop();
    for (string stringOG : close[picked]) {
      if (num[stringOG] == false) {
        before[stringOG] = picked;
        count++;
        length2[stringOG] = length2[picked] + 1;
        num[stringOG] = true;
        numGo.push(stringOG);
        }
    }    
  }
   steps = PF(s, t, p);
}
  
int PF(string begin, string end, vector<string> &path) {
//last node must have something before it, if so return 0
  if(before.end() == before.find(end)) { return 0; }
  if(begin.compare(end) != 0) {
    int after = PF(begin, before[end], path) + 1;
    path.push_back(end);
    return after;
  }
    else { path.push_back(end); return 0; }  
}

/*int main(void)
{
  int steps = 0;
  string s, t;
  vector<string> path;
  
  cout << "Source: ";
  cin >> s;

  cout << "Target: ";
  cin >> t;

  wordLadder(s, t, steps, path);

  if (steps == 0)
  {
      cout << "No path!\n";
  }
  else
  {
      cout << "Steps: " << steps << "\n\n";
      for (int i=0; i<path.size(); i++)
      {
          cout << path[i] << endl;
      }
  }
  return 0;
}*/
