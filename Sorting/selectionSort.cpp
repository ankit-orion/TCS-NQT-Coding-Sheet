#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    // now for the selection sort we take two loops the first loop will start from the very first element now for each iteration we will run abother loop
    // in this loop we wil figure out the min element
    // so selection sort states that we have to choose one element and then swap it with the minimum element
    for(int i = 0 ; i < n - 1; i++){
        int mini = i;
        for(int j = i ; j < n; j++){
            if(arr[j] < arr[mini]){
                mini = j;
            }
        }
        swap(arr[i], arr[mini]);
    }
    cout << "The sorted array is: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}