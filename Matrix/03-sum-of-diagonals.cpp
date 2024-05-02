// Given a N x N square matrix, find the sum of both primary as well as secondary diagonal elements.
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }
    int sum = 0;
    for(int i =0; i < n; i++){
        sum += arr[i][i] + arr[i][n-i-1];
        
    }
    // this is because we are adding the middle element twice
    // so we need to subtract it once
    sum = sum - arr[n/2][n/2];
    cout << sum << endl;
}