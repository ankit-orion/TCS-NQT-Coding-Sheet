#include<iostream>
using namespace std;
void fun(){
    static int i = 0;
    i++;
    cout << i << endl;
}
int main(){
    // static variables are the variables that are declared using the static keyword
    // static variables are initialized only once and they are not re-initialized
    // static variables are stored in the data segment of the memory
    // static variables are initialized to zero by default
    // static variables are not destroyed when the function ends
    fun();
    fun();
    fun();
    return 0;
}