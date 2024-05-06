// given an array and a integer k. we need to find the maximum element
// in each of the contiguous subarrays
// Input: 2 4 7 1 6 3
// k = 3
// Output: 7 7 7 6
// The subarrays will be be {2, 4, 7}, {4, 7, 1}, {7, 1, 6}, {1, 6, 3}
// The maximum element in each of the subarrays are 7, 7, 7, 6
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i =0; i < n; i++){
        cin >> arr[i];
    }
    // k is the size of the subarray
    int k;
    cin >> k;
    for(int i = 0; i <= n - k; i ++){
        int maxi = INT_MIN;
        // for every subarray starting from i I've to find out the maximum
        for(int j = i; j < i + k; j++){
            // printing the cuttrrent subarray
            cout << arr[j] << " ";
            maxi= max(arr[j], maxi);
        }
        cout << endl;
        // printing the maximum element from the subarray
        
        cout <<"Maximum element from the subarray " << maxi << endl;
    }
    return 0;
}