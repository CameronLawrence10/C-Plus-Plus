#include <iostream>
#include <cmath>
using namespace std;

bool isOdd(int n) {
            if(n % 2 == 0) {
            return false;
        }
                else {
                    return true;
                }
}

int len3nplus1(int n) {
    int count = 1;
    while(n != 1) {
//even        
        if(n % 2 == 0) {
            n = n /2;
            count++;
        }
//odd           
            else {
                n = (3 * n) + 1;
                count++;
            }
    }
    return count;
}

int sumSeq3nPlus1(int n) {
    int count = 0;
    while (n != 1) {
       count += n;
       if (n % 2 ==0) {
            n = n / 2;
         
        }
            else {
                n = (3 * n) + 1;
       
            }
    } 
return count + 1;
}


int longestSequence(int max) {
 
 return max;
}




