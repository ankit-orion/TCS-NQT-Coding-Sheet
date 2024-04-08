// Problem Statement: Given an integer array sorted in non-decreasing order,
// remove the duplicates in place such that each unique element appears only once. 
// The relative order of the elements should be kept the same.
#include<bits/stdc++.h>
using namespace std;
// int main(){
//     int n;
//     cin >> n;
//     int arr[n];
//     for(int i = 0; i < n; i++){
//         cin >> arr[i];
//     }
//     set<int> s;
//     for(int i = 0; i < n; i++){
//         s.insert(arr[i]);
//     }
//     for(auto it: s){
//         cout << it << " ";
//     }
//     return 0;
// }
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int j = 0;
    for(int i =1; i < n; i++){
        if(arr[i] != arr[j]){
            j++;
            arr[j] = arr[i];
        }
    }
    for(int i = 0; i < j+1; i++){
        cout << arr[i] << " ";
    }
    return 0;
}