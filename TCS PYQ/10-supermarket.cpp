// 1. A supermarket maintains a pricing format for all its products. A value N printed on each product. When 
// the scanner reads the value N on the item, the product of all the digits in the value N is the price of the item. 
// The task is to design a software such that given the code of any item N the product(multiplication) of all the 
// digits of value should be computed(price)
#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int price = 1;
    while(n){
        int digit = n%10;
        price *= digit;
        n /= 10;
    }
    // can also be done using recursion
    // int price = 1;
    // while(n){
    //     price *= n%10;
    //     n /= 10;
    // }
    cout << price;
    return 0;
}
    cout << price << endl;
}