#include <iostream>
#include <vector>
using namespace std;

template <class T>
class Stack{
    // Data Members
    vector<T>stack;
public:
    // Default Constructor
    Stack(){
    }
    // Member Functions
    void push(T val);
    T pop();
    bool isEmpty();
};