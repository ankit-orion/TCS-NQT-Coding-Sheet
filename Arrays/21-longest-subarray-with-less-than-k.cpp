// optimised solution
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int k;
    cin >> k;
    int maxLen = 0;
    // arr = [2, 5, 1, 10, 3] k = 14
    int l = 0;
    int r = 0;
    int sum = 0;
    while(r < n){
        sum += arr[r];
        // shrinking step to make sum <= k
        while(sum > k){
            sum = sum - arr[l];
            l++;
        }
        if(sum <= k){
            maxLen = max(maxLen, r-l+1);
            r++;
        }
    }
    cout << maxLen << endl;
    return 0;
    // Time complexity: O(n)
    // Space complexity: O(1)
    
}