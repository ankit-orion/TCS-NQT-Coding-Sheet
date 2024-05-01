// Given a N x M matrix, print its element in zig-zag fashion, i.e., 
//print first row from left to right, second row from right to left, 
//third row again from left to right and so on.
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
	bool flag = 1;
	int temp[n][m];
	for(int i = 0; i < n; i++){
	    for(int j = 0; j < m; j++){
	        // if flag is true we have to print from left to right
	        if(flag){
	            temp[i][j] = arr[i][j];
	        }
	        else{
	            temp[i][m-1-j]= arr[i][j];
	        }
	    }
	    flag = !(flag);
	}
	for(int i = 0; i < n; i++){
	    for(int j = 0; j < m; j++){
	        cout << temp[i][j] <<" ";
	    }
	}
	return 0;
}
