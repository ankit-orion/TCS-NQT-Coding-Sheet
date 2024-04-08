#include<iostream>
using namespace std;
void print(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] <<" ";
    }
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }


    //1st program: By iterating backwards TC: o(N) SC: o(1)
    // for (int i = n-1; i >= 0; i--)
    // {
    //     /* code */
    //     cout << arr[i] <<" ";
    // }


    // 2nd Program
    // this can be done by using two pointers: start and end
    // place a start pointer at the first element of the array and the end pointer
    // at the endof the array 
    // Now while start < end keep on swapping the values 
    int start = 0;
    int end = n -1;
    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    print(arr, n);
}