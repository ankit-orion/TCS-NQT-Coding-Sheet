#include<iostream>
using namespace std;
class Parent{
    public:
    virtual void display() = 0;
    void hello(){
        cout << "Hello from the parent class" << endl;
    }
};
class Child : public Parent{
    public:
    void display() override{
        cout << "This is the display function" << endl;
    }
};
int main(){
    // Parent p;
    Child c;
    c.display();
    c.hello();
    return 0;
}