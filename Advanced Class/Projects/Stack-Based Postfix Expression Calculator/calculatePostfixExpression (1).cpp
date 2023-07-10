/*
 * Name: Cameron Lawrence
 * Date Submitted: Feb 7
 * Lab Section: 003
 * Assignment Name: Calculate Postfix Expression
 */
#include <iostream>
#include <string>
#include <algorithm>
#include <stack>
#include <ctype.h>

using namespace std;

int calculatePostfixExpression(string expression[], int length) {
stack<int> postFix;
int counter = 0;
int answer;

for(int i = 0; i < length; i++) {
    if(expression[i].find_first_not_of("0123456789") == string::npos) {
        int sign = stoi(expression[i]);
        postFix.push(sign);
    }
        else {
            
            if(postFix.size() < 2) {
                return 0;
            }
    
            else if(postFix.size() >= 2){
                    int a = postFix.top();
                    postFix.pop();

                    int b = postFix.top();
                    postFix.pop();
                
                if (expression[i] == "+") {
                    postFix.push(b + a);
                }
                else if (expression[i] == "-") {
                    postFix.push(b - a);
                }
                else if (expression[i] == "%") {
                    postFix.push(b % a);
                }
                 else if (expression[i] == "*") {
                    postFix.push(b * a);
                }
                 else if (expression[i] == "/") {
                    postFix.push(b / a);
                }

            }
        }
}

        if(postFix.empty()){
            return 0;
        }
                
        answer = postFix.top();
        postFix.pop();

        if(!postFix.empty()) {
            return 0;
        }

    return answer;
}

/*int main()
{
    string exp[] = {"22", "5", "%"};

    //ASSERT_EQ(calculatePostfixExpression(exp,3), 2);
    if (calculatePostfixExpression(exp,3) != 2)
    {
        cout << "expected/correct value 2, actual value when testing " << calculatePostfixExpression(exp,3) << ".\n";
        return 1;
    }
    cout << "Passed" << endl;
    return 0;
}*/