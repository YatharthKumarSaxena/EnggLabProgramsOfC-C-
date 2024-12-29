#include "stack.cpp"

template <class T>
void Stack<T>::push(T val){
    stack.push_back(val);
}

template <class T>
T Stack<T>::pop(){
    // Underflow error
    if(this->isEmpty())return T();
    T val = stack[stack.size()-1];
    stack.pop_back();
    return val;
}

template <class T>
bool Stack<T>::isEmpty(){
    return (stack.size()==0);
}