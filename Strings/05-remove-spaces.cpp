// Problem Statement: Given a string, write a program to remove all the whitespaces from the string.

#include<iostream>
using namespace std;
int main(){
    string s;
    s = "My name is Ankit Mishra";
    for(int i = 0; i < s.length(); i++){
        if(s[i] == ' '){
            s.erase(i, 1);
            i--;
        }
    }
    cout << s << endl;
}