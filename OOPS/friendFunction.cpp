#include<iostream>
using namespace std;
// program to learn about friend function
class Parent{
    private:
    int a = 10;
    protected:
    int b = 20;
    public:
    int c = 30;
    friend void display(Parent p);
};
void display(Parent p){
    cout << "The value of a is: " << p.a << endl;
    cout << "The value of b is: " << p.b << endl;
    cout << "The value of c is: " << p.c << endl;
}
int main(){
    Parent p;
    display(p);
    return 0;
}
// a friend function is a function that is not a member of the class but has access to the private and protected members of the class
