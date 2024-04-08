#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;
//1st Program using sorting TC: o(N*log(N)), sc(1)
// int main(){
//     int n;
//     cin >> n;
//     int arr[n];
//     for(int i = 0; i < n; i++){
//         cin >> arr[i];
//     }
//     sort(arr, arr+n);
//     cout <<"second smallest number is "<< arr[1] << endl;
//     return 0;
// }


// 2nd program TC:o(N), SC: o(1)

// int main(){
//     int n;
//     cin >> n;
//     int arr[n];
//     for(int i = 0; i < n; i++){
//         cin >> arr[i];
//     }
//     int smallest = INT_MAX;
//     for(int i = 0; i < n; i++){
//         if(arr[i] < smallest) smallest = arr[i];
//     }
//     int secondSmall = INT_MAX;
//     for(int i = 0; i < n; i++){
//         if(arr[i] < secondSmall && arr[i] != smallest) secondSmall = arr[i];
//     }
//     cout <<"Second smallest number is "<< secondSmall << endl;
//     return 0;
// }

// priviously the program does two traversals of the array we can optimise the solution doing one traversal only

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int small = INT_MAX;
    int second_small = INT_MAX;
    int i;
    for(i = 0; i < n; i++) 
    {
       if(arr[i] < small)
       {
          second_small = small;
          small = arr[i];
       }
       else if(arr[i] < second_small && arr[i] != small)
       {
          second_small = arr[i];
       }
    }
   cout << "Second smallest number is " << second_small << endl;
   return 0;
}