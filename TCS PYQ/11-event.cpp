// An event management company has come up with a unique idea of printing their event tickets. Based 
// on the ticket number combination (str1), the visitor is directed towards a particular class of audience. The 
// task is to create a program/application to fetch the ticket number based on the following conditions:
// Any occurrences of digits EF, 56 and G, & should be deleted
// The characters EF should be in the same format.
// I've to remove char likes EF, 56 and G, & from the string.
#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cin >> s;
    for(int i = 0; i < s.length(); i++){
        if(s[i]=='E' && s[i+1]=='F'){
            s.erase(i, 2);
            i--;
        }
        if(s[i]=='5' && s[i+1]=='6'){
            s.erase(i, 2);
            i--;
        }
        if(s[i]=='G'){
            s.erase(i, 1);
            i--;
        }
        if(s[i]=='&'){
            s.erase(i, 1);
            i--;
        }
    }
    cout << s << endl;
}