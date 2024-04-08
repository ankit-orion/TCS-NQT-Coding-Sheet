// Problem Statement: Rearrange the array such that the first 
// half is arranged in increasing order, and the second half is 
// arranged in decreasing order

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    sort(arr, arr+n);
    int half = n/2;
    reverse(arr+half, arr+n);
    for(int i = 0;  i< n; i++){
        cout << arr[i]<< " ";
    }
    return 0;
}