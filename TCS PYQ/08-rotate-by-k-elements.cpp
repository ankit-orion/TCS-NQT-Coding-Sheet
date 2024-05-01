#include<iostream>
#include<vector>
using namespace std;
int main(){
    // move elements to the right
    // 1 2 3 4 5 6 7 8 9 10
    // k = 3
    // 8 9 10 1 2 3 4 5 6 7
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int k;
    cin >> k;
    k = k % n;
    // move the elements to the right
    vector<int>temp;
    for(int i = n - k; i < n; i++){
        temp.push_back(arr[i]);
    }
    for(int i = 0; i < n - k; i++){
        temp.push_back(arr[i]);
    }
    for(int i = 0; i < n; i++){
        cout << temp[i] << " ";
    }
    return 0;
}