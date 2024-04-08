// Problem Statement: Given an integer array sorted in non-decreasing order,
// remove the duplicates in place such that each unique element appears only once. 
// The relative order of the elements should be kept the same.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    set<int> s;
    for(int i = 0; i < n; i++){
        s.insert(arr[i]);
    }
    for(auto it: s){
        cout << it << " ";
    }
    return 0;
}