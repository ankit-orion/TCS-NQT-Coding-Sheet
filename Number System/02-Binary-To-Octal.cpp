// Problem statement: Convert a binary number to an octal number.
// octal number is a number that is base 8
// 
#include<bits/stdc++.h>
using namespace std;
int main(){
    // int n = 28;
    // int binary[32] = {0};
    // int i = 0;
    // int power = 1;
    // while(n > 0){
    //     binary[i] = n%2;
    //     n = n/2;
    //     i++;
    // }
    // for(int in = i-1; in >= 0; in--){
    //     cout << binary[in];
    // }
    // cout << endl;

    // space complexity: O(1)
    // time complexity: O(log(n))

    // Space optimised approach could be to use bitwise operators
	int n = 28,flag=0;
	for (int i = 32; i >= 0; i--) {
		if ((n >> i) & 1) {
		    flag=1;
			cout << 1;
		}
		else {
		    if(flag==1)
			cout << 0;
		}
	}
}