#include<iostream>
#include<climits>
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
    for(int i = 0; i < n-1; i ++){
        int sum = 0;
        for(int j = i; j < n-1; j++){
            sum = sum + arr[j];
            if(sum <= k){
                maxLen = max(maxLen, j-i+1);
            }
        }
    }
    cout << maxLen << endl;
}