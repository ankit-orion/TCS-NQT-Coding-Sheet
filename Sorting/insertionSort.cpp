#include<iostream>
using namespace std;
int main(){
    // insertion sort is based on the concept of inserting the element at the correct position
    // the time complexity of insertion sort is O(n^2)
    // the space complexity of insertion sort is O(1)
    // algorithm:
    // 1. we will start from the second element and then we will compare it with the previous element
    // 2. if the previous element is greater than the current element then we will swap the elements
    // 3. we will keep on doing this until we reach the first element
    // 4. we will keep on doing this for all the elements
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for (int i = 0; i <= n - 1; i++) {
        int j = i;
        while (j > 0 && arr[j - 1] > arr[j]) {
            int temp = arr[j - 1];
            arr[j - 1] = arr[j];
            arr[j] = temp;
            j--;
        }
    }
    cout << "The sorted array is: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}