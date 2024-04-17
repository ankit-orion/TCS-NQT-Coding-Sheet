// Problem Statement: Given a string, calculate the frequency of characters in a string.
// Example 1:
// Input: takeuforward
// Output: a2 d1 e1 f1 k1 o1 r2 t1 u1 w1 
// Explanation: Count of every character of string is printed.

// Example 2:
// Input: articles
// Output: a1 c1 e1 i1 l1 r1 s1 t1 
// Explanation: Count of every character of string is printed.

#include<iostream>
#include<string>
#include<map>
using namespace std;
int main(){
    string s;
    s = "articles";
    // ^ using map
    // map stores everthing in sorted order
    // so we are using map here 
    // it will store the frequency of every character in the string
    // map<char, int> m;
    // for(int i = 0; i < s.length(); i++){
    //     m[s[i]]++;
    // }
    // for(auto x: m){
    //     cout << x.first << x.second << " ";
    // }
    // tc = O(n)
    // sc = O(n)
    
    // ^ using array
    int freq[26] = {0};
    for(int i = 0; i < s.length(); i++){
        freq[s[i] - 'a']++;
    }
    for(int i = 0; i < 26; i++){
        if(freq[i] > 0){
            cout << (char)(i + 'a') << freq[i] << " ";
        }
    }
    // tc = O(n)
    // sc = O(1) // as we are using fixed size array of 26
    return 0;
}