// you have given as input N you have to print the sum value
// of all multiple of N are table multiplicaton.
// Input N = 10
// Output 550
// Explanation 10*1 + 10*2 + 10*3 + 10*4 + 10*5 + 10*6 + 10*7 + 10*8 + 10*9 + 10*10 = 550
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    // you have to multiple for N times
    int sum = 0;
    for(int i = 1; i <= n; i++){
        sum += n*i;
    }
    cout << sum << endl;
}