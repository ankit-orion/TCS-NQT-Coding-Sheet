#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int i;
    cin >> i;
    int right = n >> i; // right shift n by i bits
    if(right & 1) cout << "Yes" << endl;
    else cout << "No" << endl; 
}