#include<iostream>
using namespace std;
int main(){
    // bubble sort is based on the concept of comparing the adjacent elements and then swapping them
    // the time complexity of bubble sort is O(n^2)
    // the space complexity of bubble sort is O(1)
    // algorithm:
    // 1. we will start from the first element and then we will compare it with the next element
    // 2. if the next element is smaller than the current element then we will swap the elements
    // 3. we will keep on doing this until we reach the last element
    // 4. we will keep on doing this for all the elements
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - i - 1; j++){
            if(arr[j] > arr[j + 1]){
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    cout << "The sorted array is: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}