/*
 * Name: Cameron Lawrence
 * Date Submitted: April 17
 * Lab Section: 003
 * Assignment Name: Using Breadth-First Search to Solve Puzzles
 */ 

#include <iostream>
#include <vector>
#include <map>
#include <queue>
using namespace std;

// Reflects what each node represents...
// First value units of water in A, second units of water in B
typedef pair<int,int> state;

// Each string in edge_label must be one of the following:
const string actions[] = {"Fill A",
                          "Fill B",
                          "Empty A",
                          "Empty B",
                          "Pour A->B",
                          "Pour B->A"};

// GENERIC -- these shouldn't need to be changed...
map<state, bool> visited;         // have we queued up this state for visitation?
map<state, state> pred;           // predecessor state we came from
map<state, int> dist;             // distance (# of hops) from source node
map<state, vector<state>> nbrs;   // vector of neighboring states

map<pair<state,state>, string> edge_label;

// GENERIC (breadth-first search, outward from source_node)
void search(state source_node)
{
  queue<state> to_visit;
  to_visit.push(source_node);
  visited[source_node] = true;
  dist[source_node] = 0;
  
  while (!to_visit.empty()) {
    state curnode = to_visit.front();
    to_visit.pop();
    for (state n : nbrs[curnode])
      if (!visited[n]) {
	pred[n] = curnode;
	dist[n] = 1 + dist[curnode];
	visited[n] = true;
	to_visit.push(n);
      }
  }
}

// GENERIC
void print_path(state s, state t)
{
  if (s != t) {
    print_path(s, pred[t]);
    cout << edge_label[make_pair(pred[t], t)] << ": " << "[" << t.first << "," << t.second << "]\n";
  } else {
    cout << "Initial state: " << "[" << s.first << "," << s.second << "]\n";
  }
}

void build_graph(void) 
{
  //Implement this function
   state before = make_pair(0,0);
   int A = 3;
   int B = 4;

//While loop to continue the whole process of building the graph
//Repivitive process, copy and pasted
   while(before != make_pair(A,B)) {
       //repetition 1 
       state after;
       after = make_pair(A,before.second);
       if(after != before) {
           pair <state,state> side = make_pair(before,after);
           nbrs[before].push_back(after);
           edge_label[side] = actions[0];
       }
//repetition 2
       after = make_pair(before.first, B);
       if(after != before) {
           pair <state,state> side = make_pair(before,after);
           nbrs[before].push_back(after);
           edge_label[side] = actions[1];
       }

//repetition 3, nothinng in B or A
       after = make_pair(0, before.second);
       if(after != before) {
           pair<state,state> side = make_pair(before,after);
           nbrs[before].push_back(after);
           edge_label[side] = actions[2];
       }

//repetition 4, nothing A or B
       after = make_pair(before.first, 0);
       if(after != before) {
           pair <state,state> side = make_pair(before,after);
           nbrs[before].push_back(after);
           edge_label[side] = actions[3];
       }

//repetition 5
//pouring A into B
       int C = before.first;
       int D = before.second;
       if(before.second < B) {
           while(0 < C && B > D) {
               C--;
               D++;
           }
           after = make_pair(C,D);
           if(after != before) {
               pair<state,state> side = make_pair(before,after);
               nbrs[before].push_back(after);
               edge_label[side] = actions[4];
           }
       }
      
//repetition 6
//pouring B into A
       C = before.first;
       D = before.second;
       if(A > before.first) {
           while(0 < D && A > C) {
               C++;
               D--;
           }
           after = make_pair(C,D);
           if(after != before) {
               pair<state,state> side = make_pair(before,after);
               nbrs[before].push_back(after);
               edge_label[side] = actions[5];
           }
       }

       if (before.second != B) { before = make_pair(before.first, before.second + 1); }
       else { before = make_pair(before.first + 1,0); }
   }
}
/*
int main(void)
{
  build_graph();

  state start = make_pair(0,0);
  
  for (int i=0; i<5; i++)
    nbrs[make_pair(i,5-i)].push_back(make_pair(-1,-1));
  search (start);
  if (visited[make_pair(-1,-1)]) 
    print_path (start, pred[make_pair(-1,-1)]);
  else
    cout << "No path!\n";
  
  return 0;
}
*/