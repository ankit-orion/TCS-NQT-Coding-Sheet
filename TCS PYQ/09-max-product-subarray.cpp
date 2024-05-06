// Given an array that contains both negative and positive integers, find the maximum product subarray.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int maxi = INT_MIN;
    // brute force approach could be to find out all the subarrays
    // and then we can store it's product in a variable at each step we can compare with the previpis one
    // ! Brute force approach
    // for(int i = 0; i < n;i++){
    //     int product = 1;
    //     for(int j = i; j < n; j++){
    //         product *= arr[j];
    //         maxi = max(maxi, product);
    //     }
    // }

    // ^ Optimized approach
    int product = 1;
    for(int i = 0; i < n; i++){
        product = product * arr[i];
        maxi = max(maxi, product);
        if(product == 0 ){
            product = 1;
        }
    }
    cout << maxi << endl;
    // it can be optimized by using kadane's algorithm
    // kadane's algorithm can be used to find out the maximum sum subarray
    // we can use the same algorithm to find out the maximum product subarray
    // we can keep track of the maximum product ending at the current index
    // and the minimum product ending at the current index
    // if the current element is negative then we can swap the maximum and minimum product
    // as the product of two negative numbers is positive
    // if the current element is positive then we can multiply the current element with the maximum product ending at the previous index
    // and minimum product ending at the previous index
    // we can keep track of the maximum product ending at the current index
    // and the maximum product so far
    
    // time complexity will be O(n^2);
    // space complexity will be O(1); as no extra space requried
}