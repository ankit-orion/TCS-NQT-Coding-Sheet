// Problem:  Given a string, print non-repeating characters of the string.
#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;
int main(){
    string s;
    cin >> s;
    unordered_map<char, int> mp;
    for(int i = 0; i < s.size(); i++){
        mp[s[i]]++;
    }
    for(int i = 0; i < s.size(); i++){
        if(mp[s[i]] == 1){
            cout << s[i] << " ";
        }
    }
    return 0; 
}