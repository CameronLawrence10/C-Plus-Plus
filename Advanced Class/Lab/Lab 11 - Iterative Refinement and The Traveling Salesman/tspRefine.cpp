/*
 * Name: Cameron Lawrence
 * Date Submitted: April 26
 * Lab Section: 003
 * Assignment Name: Traveling Salesman
 */

#include <iostream>
#include <fstream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <map>
using namespace std;

const int N = 14; //Number of cities in cities.txt
typedef pair<double,double> Point; //<latitude,longitude> of a city
vector<Point> P(N), best; //P - current solution, best - best solution
map<Point, int> cities; //Point (latitude,longitude) -> index of city in cities.txt order
string cityNames[] = {"New York City",
                      "Chicago",
                      "Los Angeles",
                      "Toronto",
                      "Houston",
                      "Montreal",
                      "Mexico City",
                      "Vancouver",
                      "Atlanta",
                      "Denver",
                      "San Juan",
                      "New Orleans",
                      "Miami",
                      "Kansas City"}; //Index of a city -> city name

//Calculates "distance"
//Units are lat./long. "degrees" on an x-y plane
//to simplify calculations (not mi/km on globe)
double dist(int i, int j)
{
  double dx = P[(i+N)%N].first - P[(j+N)%N].first;
  double dy = P[(i+N)%N].second - P[(j+N)%N].second;
  return sqrt(dx*dx + dy*dy);
}

bool refine(double &len)
{
  //Implement this function
  //Should iterate through each pair of edges in the tour
  //checking if there is a decrease in tour length by
  //replacing these edges with their diagonals (see lab description)

  //If the decrease is more than a minimum threshold (such as 0.0001)
  //swap these edges for their diagonals (see description) and return true

  //Otherwise return false after iterating through all possible edge pairs
  //if swapping a pair of edges for their diagonals fails to decrease
  //tour length beyond a minimum threshold
map<double,int> change;
bool changeB = false;
int size = P.size();
int beginE1, endE1, beginE2, endE2;
double beginS, endS; 
Point patience;
     
//run through to find the final answer
for(int i = 0; i < size; i++) {
  endE1 = (i + 1) % size;
  beginE1 = i;
        
  for (int j = 2; j < size; j++) {
    beginE2 = (i + j) % size;
    endE2 = (i + j + 1) % size;
    endS =  dist(endE1, endE2) + dist(beginE1, beginE2);
    beginS = dist(beginE2, endE2) + dist(beginE1, endE1);
            
    if (0.001 < (beginS - endS)) {
      changeB = true;
      change[beginS - endS] = beginE2;
    }
  }
//if true, keep the shortest one
    if(changeB == true) {
      patience = P[change.rbegin() -> second];
      P[change.rbegin() -> second] = P[endE1];
      P[endE1] = patience;
      break;
    }
}
        
//if true, keep the new length 
if (changeB == true) {
  len = 0;
  for(int i = 0; i < size; i++) { len = dist(i, (i + 1) % size) + len; }
}
return changeB;
}

//Returns best length for test case
double tspRefine() {
  double best_len = 999999999;
  ifstream fin("cities.txt");
  for (int i=0; i<N; i++)
  {
    fin >> P[i].first >> P[i].second;
    cities[P[i]] = i;
  }
  
  //Use a loop that will repeat a certain number of times starting with
  //a randomly generated tour (P)
  //First calculate the length of this randomly generated tour
  //Then run refine() to rearrange the ordering of the cities in the
  //tour until refine() returns false
  //Finally, if final tour length < best_len replace best with the
  //current tour (P) and update best_len

  int rand = 3;
  int size = P.size();
  Point patience;
  double length = 0;
  
  for (int i = 0; i < size; i++) {
      patience = P[rand];
      P[rand] = P[i];
      P[i] = patience;
  }

//search for the length
  for(int i = 0; i < size; i++) {
    length = length + dist(i, (i + 1) % size);
  }
  if (length < best_len) {
    best_len = length;
    best = P;
  }
//loop to store the length  
  while(refine(length)) {
      if(length < best_len) {
        best = P;
        best_len = length;
      }
  }

  for (auto p : best) cout << cityNames[cities[p]] << endl;
  cout << "\nTotal length: " << best_len << "\n";
  return best_len;
}

/*int main(void)
{
  double best_len = 999999999;
  best_len=tspRefine();
  return 0;
}*/
