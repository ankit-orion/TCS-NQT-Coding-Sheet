// Problem Statement: Perfect Number. Write a program to find whether a number is a perfect number or not.

// A perfect number is defined as a number that is the sum of its proper divisors ( all its positive divisors excluding itself). 
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n;
    cin >> n;
    // int sum = 0;
    // for(int i = 1; i < n; i++){
    //     if(n%i == 0){
    //         sum += i;
    //     }
    // }
    // if(sum == n){
    //     cout << "Perfect Number" << endl;
    // }else{
    //     cout << "Not a Perfect Number" << endl;
    // }

    // here we can reduce our seatch space from O(N) to O(sqrt(N))
    int sum = 0;
    for(int i = 0; i <= sqrt(n); i++){
        if(n%i == 0){
            if(i*i == n){
            sum += i;
        }else{
            sum += i + n/i;
        }
        }
    }
    return 0;
}