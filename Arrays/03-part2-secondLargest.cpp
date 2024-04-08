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
//     cout <<"second largest number is "<< arr[n-2] << endl;
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
//     int largest = INT_MIN;
//     for(int i = 0; i < n; i++){
//         if(arr[i] > largest) largest = arr[i];
//     }
//     int secondlarge = INT_MIN;
//     for(int i = 0; i < n; i++){
//         if(arr[i] > secondlarge && arr[i] != largest) secondSmall = arr[i];
//     }
//     cout <<"Second largest number is "<< secondSmall << endl;
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
    int large=INT_MIN,second_large=INT_MIN;
    int i;
    for (i = 0; i < n; i++) 
    {
        if (arr[i] > large) 
        {
            second_large = large;
            large = arr[i];
        }
 
        else if (arr[i] > second_large && arr[i] != large) 
        {
            second_large = arr[i];
        }
    }
    return second_large; 
    }
   cout << "Second largest number is " << second_large << endl;
   return 0; 
}