#include <iostream>
using namespace std;

// Run Time Polymorphism 

// Hiearchical Inheritance 
class Vehicle{ // Base Class
public:
    virtual void start(){
        cout<<"Vehicle is going to start\n";
    }
    virtual void stop(){
        cout<<"Vehicle is going to stop\n";
    }
};

class Bike: public Vehicle{ // Derived Class
public:
    void start(){ // Function Overriding
        cout<<"Bike is going to start\n";
    }
    void stop(){
        cout<<"Bike is going to stop\n";
    }
};

class Car: public Vehicle{ // Derived Class
public:
    void start(){
        cout<<"Car is going to start\n";
    }
    void stop(){
        cout<<"Car is going to stop\n";
    }
};

int main(){
    Vehicle* arr[3]; // Array of Base Pointer
    arr[0] = new Vehicle();
    // Storing Address of Derived Class Address in Base Pointer
    arr[1] = new Bike();
    arr[2] = new Car();
    for(int i=0;i<3;i++){
        arr[i]->start(); // Late Binding
        arr[i]->stop(); // Late Binding
    }
}