// Problem Statement: Find all the non-repeating elements for a given array. Outputs can be in any order.
// using sort 
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
    for(int i = 0; i < n; i++){
        if(arr[i] != arr[i+1] && arr[i] != arr[i-1]){
            cout << arr[i] << " ";
        }
    }
    return 0;
}
