// Problem Statement: Write a program to remove all characters from a string except alphabets in a given string.

// Examples:

// Example 1:
// Input: string str = "take12% *&u ^$#forward"
// Output: takeuforward
// Explanation:
// Characters 1,2,%,*,&,^,$,# along with whitespaces are 
// removed but the order of remaining alphabets is preserved.

// Example 2:
// Input: String str = "1.Python & 2.Java"
// Output: PythonJava
// Explanation: 
// Characters 1.&2. along with whitespaces are removed 
// but the order of remaining alphabets is preserved.
#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    s = "take12% *&u ^$#forward";
    cout << int('A') << endl;
    cout << int('Z') << endl;
    cout << int('a') << endl;
    cout << int('z') << endl;
    cout << int(' ') << endl;
    for(int i = 0; i < s.length(); i++){
        if((s[i] < 65 || s[i] > 90) && (s[i] < 97 || s[i] > 122)){
            s.erase(i, 1);
            i--;
        }
    }
    cout << s << endl;
    return 0;
}