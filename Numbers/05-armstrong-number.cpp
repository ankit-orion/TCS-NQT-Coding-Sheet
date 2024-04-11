// Problem Statement: Given a number, check if it is Armstrong Number or Not.

// Examples:

// Example 1:
// Input:153 
// Output: Yes, it is an Armstrong Number
// Explanation: 1^3 + 5^3 + 3^3 = 153

// Input:170 
// Output: No, it is not an Armstrong Number
// Explanation: 1^3 + 7^3 + 0^3 != 170
// What are Armstrong Numbers?

// Armstrong Numbers are the numbers having the sum of digits raised to power no. of digits is equal to a given number. Examples- 0, 1, 153, 370, 371, 407, and 1634 are some of the Armstrong Numbers.
#include<iostream>
#include<math.h>
using namespace std;
bool checkArmStrong(int num){
    int sum = 0;
    int temp = num;
    int count = 0;
    while (temp > 0)
    {
        temp /= 10;
        count++;
    }
    temp = num;
    while(temp > 0){
        int digit = temp % 10;
        sum += pow(digit, count);
        temp /= 10;
    }
    return (num == sum);
}
int main(){
    int n;
    cin >> n;
    checkArmStrong(n) ? cout <<"It is a armstrong number": cout <<"It is not a armstrong number";
}