// Given a N x M matrix which is sorted in non-increasing order both row-wise and column-wise, count the number of negative numbers in matrix.
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n, m;
    cin >> n>> m;
    int count = 0;
    int arr[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> arr[i][j];
            if(arr[i][j] < 0) count++;
        }
    }
    cout << count << endl;

}
