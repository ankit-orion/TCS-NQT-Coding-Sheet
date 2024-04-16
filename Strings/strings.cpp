#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
void print(string s){
    cout << s << endl;
}
// string change(string s){
//     s = "Bye";
//     return s;
// }
int main(){
    // char name[100];
    // cin >> name;
    // cout << name << endl;  
    // string s;
    // cin >> s;
    // cout << s << endl; 
    // string str = "Hello my name is Ankit Mishra";
    // cout << str << endl;
    // learning string functions
    // cout << str.length() << endl;
    // for(int i = 0; i < str.size(); i++){
    //     cout << str[i] << " ";
    // }
    // for(int i = 0; i < str.length(); i++){
    //     if(str[i]== ' '){
    //         // remove the space
    //         str.erase(i,1);
    //     }
    // }
    // string s2 = "Hello";
    // print(s2);
    // string newString = change(s2);
    // print(newString);
    // this is a print function it is used to print the string
     // {'a','b','c','d','\0

    // ^ Cpp string functions
    string s = "Hello";
    cout << s.length() << endl;
    string s1 = "string1";
    string s2 = "string2";
    cout << "swapping s1 and s2\n";
    swap(s1,s2);
    cout << "s1: " << s1 << " s2: " << s2 << endl;
    cout <<"Size of string s: " << s.size() << endl;
    s.push_back('a');
    cout << "After push_back: " << s << endl;
    s.pop_back();
    cout << "After pop_back: " << s << endl;
    s.clear();
    cout << "After clear: " << s << endl;
    s.push_back('a');
    cout << "After push_back: " << s << endl;
    s.push_back('b');
    s.push_back('c');
    s.push_back('d');
    s.erase(1);
    cout << "After erase: " << s << endl;
    string s3 = "Hello My name is Ankit";
    for(int i = 0; i< s3.size(); i++){
        if(s3[i] == ' '){
            s3.erase(i, 1);
        }
    }
    cout << "After erase: " << s3 << endl;
    return 0;
}
