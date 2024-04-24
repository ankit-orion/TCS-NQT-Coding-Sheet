// you gotta print the unique value in the map
// also you can use the count function to check if a key is present in the map or not
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    map<string, int> m;
    for(int i = 0; i < n; i++){
        string s;
        cin >> s;
        m[s] = m[s] + 1;
        // this will store the count corresponding to each keys
    }
    for(auto it:m){
        cout << it.first <<"->" << it.second << endl;
    }
    // since we have the count of every element now we can perform opetaions
    // like finding the unique element, the element with the maximum count, etc.
    // Problem 1:
    // Find the  element with maximum count
    int maxi = INT_MIN;
    map<string, int> ::iterator unique;
    for(auto x:m){
        if(x.second > maxi){
            maxi = x.second;
            // store it in unique so that we can access it later
            unique = m.find(x.first);
            // this will store the max element
            // which can be used to print later
            
        }
    }
    cout << "The element with maximum count is: " << maxi << endl;
    cout << "The element with maximum count is: " << unique->first << " "<< unique->second << endl;
    
}