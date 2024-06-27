// bubble sort is based on push the maximum lement to the end of the array by adjecent swapping
// the time complexity of bubble sort is O(n^2)
// the space complexity of bubble sort is O(1)
#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - i - 1; j++){
            if(arr[j] > arr[j + 1]){
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    cout << "The sorted array is: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}
// TC = O(n^2)
// SC = O(1)