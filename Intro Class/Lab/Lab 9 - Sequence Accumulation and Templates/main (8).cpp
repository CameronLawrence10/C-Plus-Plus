// Group Members: Steven Cabezas, James King, Tennare Jackson, Cameron Lawrence
// My Class: CPSC 1021
// Date: 11/28/2022
// Desc: main file for accumulator
// Time: 1 hour

#include<iostream>
#include<string>
#include"accum.h"

using namespace std;

int main()
{
    int num;
    string str;
    
    vector<int> v1;
    cout << "Enter four numbers: ";
    for (int i = 0; i < 4; i++)
    {
        cin >> num;
        v1.push_back(num);
    }
    cout << "The sum of the numbers is " << accum(v1) << endl;
    cout << "Enter four strings: ";
   
    vector<string>v2;
    for (int i = 0; i < 4; i++)
    {
        cin >> str;
        v2.push_back(str);
    }
    cout << "The sum of the strings is ";
    for (int i = 0, max = v2.size(); i != max; i++)
        {
            cout << v2[i];
            if (i < max-1)
            {
               cout <<  ", ";
            }

            
        }
    cout << " " << endl;

    return 0;
}
