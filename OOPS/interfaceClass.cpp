// program to learn about interface class
#include<iostream>
using namespace std;
class Interface{
    public:
    virtual void display() = 0;
    virtual void show() = 0;
    void hello(){
        cout << "Hello from the interface class" << endl;
    }
};
class Child : public Interface{
    public:
    void display() override {
        // override keyword is used to tell the compiler that this function is overriding the function of the parent class
        cout << "This is the display function" << endl;
    }
    void show() override{
        cout << "This is the show function" << endl;
    }
    void hello(){
        cout << "Hello from the child class" << endl;
    }
};
int main(){
    Child c;
    c.display();
    c.show();
    c.hello();
    return 0;
}