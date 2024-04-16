// Problem Statement: Reverse a String. Write a program that reverses a given string (in-place).
#include<iostream>
using namespace std;
int main(){
    string s;
    s = "my name is ankit mishra";
    int i = 0;
    int j = s.length()-1;
    while(i < j){
        swap(s[i], s[j]);
        i++;
        j--;
    }
    cout << s << endl;
}