#include<iostream>
#include<algorithm>
using namespace std;
//1st Program using sorting TC: o(N*log(N)), sc(1)
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    sort(arr, arr+n);
    cout <<"largest number is "<< arr[n-1] << endl;
    return 0;
}
// 1st program TC:o(N), SC: o(1)
// int main(){
//     int n;
//     cin >> n;
//     int arr[n];
//     for(int i = 0; i < n; i++){
//         cin >> arr[i];
//     }
//     int num = arr[0];
//     for(int i = 1; i < n; i++){
//         if(arr[i] > num) num = arr[i];
//     }
//     cout <<"largest number is "<< num << endl;
//     return 0;
// }