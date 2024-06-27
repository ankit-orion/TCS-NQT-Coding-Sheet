#include<iostream>
using namespace std;
class Parent{
    private:
    int a = 10;
    protected:
    int b = 20;
    public:
    int c = 30;
    friend class Child;
};
class Child : public Parent{
    public:
    void display(){
        cout << "The value of a is: " << a << endl;
        cout << "The value of b is: " << b << endl;
        cout << "The value of c is: " << c << endl;
    }
};
int main(){
    Child c;
    c.display();
    return 0;
}