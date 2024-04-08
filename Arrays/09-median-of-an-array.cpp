// Problem Statement: Given an unsorted array, find the median of the given array.
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
    if(n%2 == 0){
        double median = arr[n/2] + arr[n/2-1];
        cout << median/2;
    }
    else{
        cout << arr[n/2];
    }
}