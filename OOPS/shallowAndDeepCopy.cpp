#include<iostream>
#include<string>
using namespace std;
class Car{
    public:
    int price;
    string color;
    int speed;
    Car(int price, string color, int speed){
        this->price = price;
        this->color = color;
        this->speed = speed;
    }
    // IN case of shallow copy the copy constructor is not required
    // it essentially copies the address of the object 
    // so shllow copy is done by the default copy constructor

    // but in case of deep copy we need to create our own copy constructor
    // so shallow copy is done by the default copy constructor and deep copy is done by the user defined copy constructor
    
    // copy constructor for deep copy
    // Car(const Car &other){
    //     price = other.price;
    //     color = other.color;
    //     speed = other.speed;
    // }
    void display(){
        cout << price << " " << color << " " << speed << endl;
    }
};
int main(){
    Car c1(100, "red", 200);
    Car c2(c1);
    c1.display();
    c2.display();
    c1.price = 200;
    cout << "After changing the price of c1 using shallow copy: " << endl;
    c1.display();
    c2.display();
}