#include <iostream>
using namespace std;

class A{ // Base Class
public:
    void fun(){
        cout<<"A ka Show\n";
    }
};

class B{ // Base Class
public:
    void fun(){
        cout<<"B ka Show\n";
    }
};

// Multiple Inheritance
class C: public A, public B{ // Derived Class
public:
    // void fun(){} // If definition is available then no ambiguity as class C fun is called
};

int main(){
    // Objects Instantiation
    A obj1;
    B obj2;
    C obj;
    // Function Calling of Objects
    obj1.fun();
    obj2.fun();
    // obj.fun(); // Cannot be done but if fun() definition in class C is available then no error
    // To remove ambiguity Scope Resolution Operator can be used
    obj.A::fun();
    obj.B::fun();
}