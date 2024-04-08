// Problem Statement: Find all the repeating elements present in an array.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    unordered_map<int, int> mp;
    for(auto i: arr){
        ++mp[i];
    }

    for(auto i: mp){
        if(i.second > 1){
            cout << i.first <<" ";
        }
    }
    return 0;
}
