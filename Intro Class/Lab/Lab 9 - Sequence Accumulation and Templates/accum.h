// Group Members: Steven Cabezas, James King, Tennare Jackson, Cameron Lawrence
// My Class: CPSC 1021
// Date: 11/28/2022
// Desc: .h file for accumulator
// Time: 1 hour

#ifndef ACCUM_H_
#define ACCUM_H_
#include<vector>

using namespace std;

template <typename T>
T accum(vector<T> v)
    {
        T sum = T();
        for (int i = 0, max = v.size(); i != max ;++i)
        {
            sum += v[i];
        }
        return sum;
    }


#endif
