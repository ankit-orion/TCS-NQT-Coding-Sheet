// Problem Statement:  Given a number check if it is a palindrome.

// An integer is considered a palindrome when it reads the same backward as forward.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    // simply reverse the number and compare it with origincal number
    int rev = 0;
    int temp = n;
    while(temp > 0){
        int digit = temp%10;
        rev = rev*10 + digit;
        temp = temp/10;
    }
    (n == rev)? cout <<"Given number is a palindrome number" : cout << "Given number is not a palindrome number";
    return 0;
}