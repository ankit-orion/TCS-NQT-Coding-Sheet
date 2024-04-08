#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// void frequency(int arr[], int n){
//     //solution 1 : Iterate on  each element
//     // we can track each element by using two for loops 
//     // we also need a visited array which will check whether the element
//     // is already visited or not
//     bool visited[n] ={0};
//     for(int i = 0; i < n; i++){
//         if(visited[i] == true){
//             continue;
//         }
//         int count = 1;
//         for (int j = i+1; j < n; j++)
//         {
//             /* code */
//             if(arr[i] == arr[j]){
//             visited[j]=true;
//             count++;
//             }
//         }
//         cout << "count of "<<arr[i] <<" is "<< count << endl;
//     }
// }

void frequency(int arr[], int n){

    // we can use a map of value and frequency pair, in which we can easily update the
    // frequency of an element if it already present in the map, if it is not present in the
    // map then insert it in the map with frequency as 1. After completing all the iterations
    // print the value of frequency pair.

    // Approach:-
    unordered_map<int, int> map;
    for(int i = 0; i < n; i++){
        map[arr[i]]++;
    }

    for (auto x : map)
    {
        cout << "count of "<< x.first <<" is "<< x.second << endl;
    }
    
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    frequency(arr, n);

    return 0;
}