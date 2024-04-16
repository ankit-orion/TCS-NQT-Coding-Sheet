// Problem Statement: Given a String, write a program to remove vowels from a given String.
#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    s = "My name is Ankit Mishra";
    for(int i = 0; i < s.length(); i++){
        if(s[i]== 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
            s.erase(i, 1);
            i--; 
            // since we are removing one element so we need to decrease our search space by 1
            // because the string is now shifted by 1 position to the left so we need to decrement i by 1
            // if we don't decrement i by 1 then we will skip the next character
            // example: if we have "Hello" and we remove 'e' then the string becomes "Hllo" and if we don't decrement i by 1 then we will skip 'l' and move to 'o'

        }
    }
    cout << s << endl;
}