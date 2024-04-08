// Find all repeating elements in an array
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
        if(arr[i] == arr[i+1]){
            cout << arr[i] << " ";
            while(arr[i] == arr[i+1]){
                i++;
            }
        }
    }
    return 0;
}