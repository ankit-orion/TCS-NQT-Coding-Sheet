// Problem Statement: Given a range of numbers, find all the palindrome numbers in the range.

// Note: A palindromic number is a number that remains the same when its digits are reversed.OR  a palindrome is a number that reads the same forward and backward Eg: 121,1221, 2552
#include<iostream>
using namespace std;
bool checkPalindrome(int i){
    int temp = i;
    int rev = 0;
    while(temp > 0){
        int digit = temp%10;
        rev = rev*10 + digit;
        temp /= 10;
    }
    if(i == rev) return true;
    else return false;
}
int main(){
    int min, max;
    cin >> min >> max;
    for(int i = min; i <= max; i++){
        if(checkPalindrome(i)) cout << i <<" ";
    }
    return 0;

}