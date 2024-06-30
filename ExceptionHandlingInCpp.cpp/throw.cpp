#include<iostream>
using namespace std;
int divide(int a, int b){
    if(b == 0){
        throw "Division by zero!";
    }
    return a / b;
}
int main(){
    try{
        int result = divide(10, 0);
        cout << "The result is: " << result << endl;
    } catch(const char* msg){
        cerr << msg << endl;
    }
    return 0;
}