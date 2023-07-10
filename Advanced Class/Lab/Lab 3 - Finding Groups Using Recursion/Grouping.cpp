/*
 * Name: Cameron Lawrence
 * Date Submitted: Feb 12
 * Lab Section: 003
 * Assignment Name: Grouping
 */
#include "Grouping.h"
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

//Implement the (parameterized) constructor and findGroup functions below

Grouping::Grouping(string file){
    //ifstream to open file 
    ifstream myFile(file);
    string text;
    vector <GridSquare> num;

    int counter = 0;

    //checking for the text files in starter code
    //10 rows
    for(int i = 0; i < 10; i++) {
        getline(myFile, text);
        //looping for k to be the same as 'X', then change to 1, if not then change to 0 
        //10 columns 
        for(int k = 0; k < 10; k++) {
            //default constructor grid
            grid[i][k] = (text[k] == 'X') ? 1 : 0;
        }
    }

    //10 rows
    for(int i = 0; i < 10; i++) {
        //10 columns
        for(int k = 0; k < 10; k++) {
            //if an X is found call call the findGroup function
            if(grid[i][k] == 1) {
                groups.push_back(vector <GridSquare>());
                //calling recursive function
                findGroup(i,k);
                counter++; //tester for main
            } } } }

void Grouping::findGroup(int row, int column) {
    if(grid[row][column] == 0) {
        return;
    }
    //the minimum = 0 and the maximum = 10 for the whole grid
    if(column < 0 || column >= 10) {
        return;
    }    
    if(row < 0 || row >= 10) {
        return;
    }
    
    grid[row][column] = 0;
    findGroup(row + 1, column);
    findGroup(row - 1, column);
    findGroup(row, column + 1);
    findGroup(row, column - 1);
    groups[groups.size() - 1].push_back(GridSquare(row,column)); 
}

//Simple main function to test Grouping
//Be sure to comment out main() before submitting

//original main, deleted mine for gradescope
/*int main()
{
    Grouping input1("input1.txt");
    input1.printGroups();
    
    return 0;
}*/


//Do not modify anything below

GridSquare::GridSquare() : row(0), col(0) {} //Default constructor, (0,0) square

GridSquare::GridSquare(int r, int c) : row(r), col(c) {} //(r,c) square

//Compare with == operator, used in test cases
bool GridSquare::operator== (const GridSquare r) const
{
    if ((row == r.row) && (col == r.col))
    {
        return true;
    }
    return false;
}

int GridSquare::getRow() //return row value
{
    return row;
}

int GridSquare::getCol() //return column value
{
    return col;
}

//Output using << operator, used in Grouping::printGroups()
//Function definition for <ostream> << <GridSquare>
ostream& operator<< (ostream& os, const GridSquare obj)
{
    os << "(" << obj.row << "," << obj.col << ")";
    return os;
}

Grouping::Grouping() : grid{},groups() {} //Default constructor, no groups

void Grouping::printGroups() //Displays grid's groups of squares
{
    for(int g=0; g<groups.size(); g++)
    {
        cout << "Group " << g+1 << ": ";
        for(int s=0; s<groups[g].size(); s++)
        {
            cout << " " << groups[g][s];
        }
        cout << endl;
    }
}

vector<vector<GridSquare>> Grouping::getGroups() //Needed in unit tests
{
    return groups;
}