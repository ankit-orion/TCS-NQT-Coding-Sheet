// Q1. A party has been organised on a cruise. The party is organised for a limited time(T). The number of 
// guests entering (E[i]) and leaving (L[i]) the party at every hour is represented as elements of the array. The 
// task is to find the maximum number of guests present on the cruise at any given instance within T hours
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int E[n], L[n];
    for(int i=0; i<n; i++){
        cin >> E[i];
    }
    for(int i=0; i<n; i++){
        cin >> L[i];
    }
    int current = 0, max_guests = 0;
    for(int i = 0; i < n; i++){
        current += E[i] - L[i];
        max_guests = max(max_guests, current);
    }
    cout << max_guests;
    return 0;
}