#include<iostream>
using namespace std;
class Parent{
    public:
    void display(){
        cout << "This is the parent class" << endl;
    }
    virtual void hello(){
        cout << "Hello from the parent class" << endl;
    }
};
class Child : public Parent{
    public:
    void display(){
        cout << "This is the child class" << endl;
    }
    void hello(){
        cout << "Hello from the child class" << endl;
    }
};
int main(){
    Parent p;
    // p.display();
    Child c;
    // c.display();
    // Parent *ptr = &c;
    // ptr -> display();
    p.hello();
    c.hello();
    
    return 0;
}