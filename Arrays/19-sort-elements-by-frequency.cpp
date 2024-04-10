// Sort Elements of an Array by Frequency

// Problem Statement: Given an array of integers, having some duplicate elements, sort the array by frequency.

// Examples:

// Example 1:
// Input: N = 8, array[] = {1,2,3,2,4,3,1,2}
// Output: 2 2 2 1 1 3 3 4 
// Explanation: Since  2 is present 3 times in an array , so print it 3 times ,then print ‘1’ 2 times and then ‘3’ 2 times and 4 has least frequency, it will be printed at last.

// Example 2:
// Input: N = 6, array[] = {-199,6,7,-199,3,5}
// Output: -199 -199 3 5 6 7
// Explanation: Since -199 is present 2 times so it will be printed at first , then 3 , 5 ,6 ,7 are present once in array , so print them in their sorted order.

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
    for(int i = 0; i < n; i++){
        mp[arr[i]]++;
    }
    vector<pair<int, int>> v;
    for(auto i : mp){
        v.push_back({i.second, i.first});
    }
    sort(v.begin(), v.end(), greater<pair<int, int>>()); 
    // here we are sorting the vector of pairs in descending order of frequency because we want to print the elements with highest frequency first
    for(auto i : v){
        for(int j = 0; j < i.first; j++){
            cout << i.second << " ";
        }
    }
    return 0;
}