#include<bits/stdc++.h>
// it includes all the header files of c++
using namespace std;
int main(){
    // variables
    // int, float, bool, string, char
    // int x = 10;
    // cout << x;
    // int y;
    // cin >> y;
    // // The value of x is 10
    // cout <<"The value of x is " << x << endl;
    // // loops
    // // for, while, do while
    // // 10 times name
    // for(int i = 0; i < 10; i++){
    //     cout << "sarthak" << endl;
    //     // sarthak
    //     // sarthak
    //     cout <<"ankit" <<" ";
    //     // ankit ankit ankit abkit
    // }
    // int val = 10;
    // while(val > 0){
    //     cout << "Ankit";
    //     val--; //
    // }
    // // if else
    // int age = 18;
    // if(age >= 18){
    //     cout <<"you can vote";
    // }else{
    //     cout<<"u can't";
    // }
    // arrays
    // int n;
    // cin >> n;
    // int arr[n];
    // // taking input
    // for(int i = 0; i < n; i++){
    //     cin >> arr[i];
    // }
    // // output
    // for(int i = 0; i < n; i++){
    //     cout << arr[i] <<" ";
    // }
    // vector<int> vec;
    // vec.push_back(10);
    // vec.push_back(20);
    // vec.push_back(30);
    // cout << vec[2] << endl;
    // vec.push_back(40);
    // for(int i = 0; i < vec.size(); i++){
    //     cout << vec[i] <<" ";
    // }
    // vec.pop_back();
    // vec.pop_back();
    // for(int i = 0; i < vec.size(); i++){
    //     cout << vec[i] <<" ";
    // }
    // vectors -- imp
    //! palindrome 
    // 123321

    // arr[] {a, b, c. c. b, a}
    // int x = 123;
    // // 1 2 3
    // // %, / - % - remainder, /- divide
    // cout << x % 10 << endl;

    // x = x / 10;
    // cout << x;
    // cout << x % 10;
    // x = x/10;
    // cout << x;
    int x = 54321;
    // 12345
    int val = 0;
    while(x){
        int digit = x % 10; // digit = 
        val = val*10 + digit;
        // 
        x = x / 10;
    }
    cout << val << endl;
}