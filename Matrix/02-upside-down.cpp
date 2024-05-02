#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n, m;
	cin >> n >> m;
	int arr[n][m];
	for(int i = 0; i < n; i++){
	    for(int j = 0; j < m; j++){
	        cin >> arr[i][j];
	    }
	}
	for(int i = 0; i < n/2; i++){
	    for(int j = 0; j < m; j++){
	        swap(arr[i][j], arr[n-i-1][j]);
	    }
	}
	for(int i = 0; i < n; i++){
	    for(int j = 0; j < m; j++){
	        cout << arr[i][j]<<" ";
	    }
	    cout << endl;
	}
	
	return 0;
}
