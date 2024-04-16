// Remove brackets from an algebraic expression

// Write a program to remove brackets from an algebraic expression

// Given an algebraic expression, we need to simplify the expression and remove the brackets.

// Examples:

// Example 1:
// Input: “a+((b-c)+d)”
// Output: “a+b-c+d”
// Explanation: Removed all the brackets in the algebric expression.

// Example 2:
// Input: “(((a-b))+c)”
// Output: “a-b+c”
// Explanation: Removed all the brackets in the algebric expression.

#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    s = "a+((b-c)+d)";
    for(int i = 0; i < s.length(); i++){
        if(s[i] == '(' || s[i] == ')'){
            s.erase(i, 1);
            i--;
        }
    }
    cout << s << endl;
    return 0;
}

