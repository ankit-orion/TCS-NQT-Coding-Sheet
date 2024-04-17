// Problem Statement: Given a string, write a program to Capitalize the first and last character of each word of that string.
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s;
    s = "Take u Forward is Awesome";
    cout << s << endl;
    for(int i = 0; i < s.length(); i++){
        if(i == 0 || s[i-1] == ' '){
            s[i] = toupper(s[i]);
        }
        else if(i == s.length()-1 || s[i+1] == ' '){
            s[i] = toupper(s[i]);
        }
    }
    cout << s << endl;
}