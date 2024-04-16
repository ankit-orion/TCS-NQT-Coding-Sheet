// check if a given string is palindrome or not
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s;
    cin >> s;
    int i = 0;
    int j = s.length()-1;
    bool flag = 0;
    while(i < j){
        if(s[i]!= s[j]){
            cout << "Not a Palindrome" << endl;
            flag = 1;
            break;
        }
        i++;
        j--;
    }
    if(flag == 0){
        cout << "Palindrome" << endl;
    }
    return 0;
}