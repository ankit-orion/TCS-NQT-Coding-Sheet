// Problem Statement: Given an unsorted array, remove duplicates from the array.
// The relative order of the elements should be kept the same.
// Example:
// Input: 2, 3, 1, 9, 1, 2, 9
// Output: 2, 3, 1, 9
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    map<int, int> m;
    for(int i = 0; i < n; i++){
        if(m.find(arr[i]) == m.end()){
            cout << arr[i] << " ";
            m[arr[i]]++;
        }
    }
}