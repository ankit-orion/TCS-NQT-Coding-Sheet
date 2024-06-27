#include<iostream>
#include<string>
using namespace std;
class Student{
    public:
    string name;
    double* cgpaPtr = new double;
    Student(string name, double cgpa){
        this -> name = name;
        // cgpaPtr = new double;
        *cgpaPtr = cgpa;
    }

    void getInfo(){
        cout << "The name of the student is: " << name << endl;
        cout << "The cgpa of the student is: " << *cgpaPtr << endl;
    }

    // creating our own copy constructor
    // Student(Student &s){
    //     this -> name = s.name;
    //     this -> cgpaPtr = s.cgpaPtr; 
    // }
    Student(Student &s){
        this -> name = s.name;
        cgpaPtr = new double;
        *cgpaPtr = *(s.cgpaPtr);
    }

};
int main(){
    Student s1("Rahul Kumar", 9.8);
    s1.getInfo();

    Student s2(s1);
    *(s2.cgpaPtr) = 7.5;
    s1.getInfo();
    s2.getInfo();
}