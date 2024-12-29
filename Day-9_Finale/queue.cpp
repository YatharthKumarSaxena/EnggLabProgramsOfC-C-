#include "functionsOfStack.cpp"

template <class T>
class Queue{
    // Data Members
    Stack<T>st1; // Main Stack
    Stack<T>st2; // Helper Stack
    int size;
public:
    // Default Constructor
    Queue(){
        this->size = 0;
    }
    // Member Functions
    void Enqueue(T val);
    T Dequeue();
    void display();
};