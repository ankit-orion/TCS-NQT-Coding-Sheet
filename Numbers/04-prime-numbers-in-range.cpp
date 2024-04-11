// Problem Statement: Given a and b, find prime numbers in a given range [a,b], (a and b are included here).

#include<iostream>
#include<math.h>
using namespace std;
bool checkPrime(int num){
    for(int i = 2; i <= sqrt(num); i++){
        if(num % i == 0)
        return false;
    }
    return true;
}
int main(){
    int a, b;
    cin >> a >> b;
    for(int i = a; i <= b; i++){
        checkPrime(i)?cout << i <<" ": cout <<"";
    }
    return 0;
}