//Problem Statement: Given a string, write a program to count the number of vowels, consonants, and spaces in that string.

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    string s;
    s = "My name is Ankit Mishra";
    int vowels = 0;
    int consonats = 0;
    int spaces = 0;
    // we gotta change the string to lowercase
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    cout << s << endl;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
            vowels++;
        }else if(s[i] == ' '){
            spaces++;
        }
        else{
            consonats++;
        }
    }
    cout << "Vowels: " << vowels << endl;
    cout << "Consonants: " << consonats << endl;
    cout << "Spaces: " << spaces << endl;
    return 0;
}