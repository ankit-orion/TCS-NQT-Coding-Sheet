// Check if a number is prime or not

// Problem Statement: Given a number, check whether it is prime or not. A prime number is a natural number that is only divisible by 1 and by itself.

// Examples 1 2 3 5 7 11 13 17 19 …
#include<bits/stdc++.h>
using namespace std;
bool checkPrimeOptimal(int n){
    // i <= sqrt reason for = is to handle the case of perfect square
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}
bool checkPrimeBrute(int n){
    for(int i = 2; i < n; i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    cin >> n;
    // either we can run a loop from 2 to n-1 and if it's divisible
    // by any of the no in between we can return that it's not a prime
    // number but that will take 0(n) time complexity
    checkPrimeBrute(n) ? cout <<"Brute Approach: It is a prime number":cout <<"Brute Approach: It is not a prime number";
    cout << endl;
    checkPrimeOptimal(n)? cout <<"Optimal Approach: It is a prime number":cout <<"Optimal Approach: It is not a prime number";
}