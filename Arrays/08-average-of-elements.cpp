// Problem Statement: Given an array, we have to find the average of all the elements in the array.

#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    double sum = 0;
    for(int i = 0; i < n; i++){
        sum += (double)arr[i];
    }
    double ans = sum/n;
    cout << ans;
}