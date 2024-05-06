#include<iostream>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    int arr[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> arr[i][j];
        }
    }
    int x, y;
    cin >> x >> y;
    int count = 0;
    if(x-2 >= 0 && y-1 >= 0 && arr[x-2][y-1] == 1){
        count++;
    }
    if(x-2 >= 0 && y+1 < m && arr[x-2][y+1] == 1){
        count++;
    }
    if(x-1 >= 0 && y-2 >= 0 && arr[x-1][y-2] == 1){
        count++;
    }
    if(x-1 >= 0 && y+2 < m && arr[x-1][y+2] == 1){
        count++;
    }
    if(x+1 < n && y-2 >= 0 && arr[x+1][y-2] == 1){
        count++;
    }
    if(x+1 < n && y+2 < m && arr[x+1][y+2] == 1){
        count++;
    }
    if(x+2 < n && y-1 >= 0 && arr[x+2][y-1] == 1){
        count++;
    }
    if(x+2 < n && y+1 < m && arr[x+2][y+1] == 1){
        count++;
    }
    cout << count;
    return 0;
}