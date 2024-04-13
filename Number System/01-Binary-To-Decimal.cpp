// Problem Statement: Convert a binary number to a decimal number.

// tale the input in string format
// N = 1011
// Op: 11
// 11 = 1*2^3 + 0*2^2 + 1*2^1 + 1*2^0 = 8 + 0 + 2 + 1 = 11
// 11 = 1*pow(2,3) + 0*pow(2,2) + 1*pow(2,1) + 1*pow(2,0) = 8 + 0 + 2 + 1 = 11

#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main(){
    string s;
    cin >> s;
    int n = s.size();
    int decimal = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == '1'){
            decimal += 1*pow(2, n-i-1);
        }
    }
    // cout << n; // ip = 1011, op = 4
    cout << decimal; // ip = 1011, op = 11
    return 0;
}