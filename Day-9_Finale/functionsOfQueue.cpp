#include "queue.cpp"

template <class T>
void Queue<T>::Enqueue(T val){
    st1.push(val);
    size++;
}

template <class T>
T Queue<T>::Dequeue(){
    if(st1.isEmpty()){
        cout<<"Underflow Error\n";
        cout<<"Note:- Garbage Value is returned\n";
        return T();
    }
    while(!st1.isEmpty()){
        T value = st1.pop();
        st2.push(value);
    }
    T ele = st2.pop();
    while(!st2.isEmpty()){
        T value = st2.pop();
        st1.push(value);
    }
    size--;
    return ele;
}

template <class T>
void Queue<T>::display(){
    for(int i=0;i<size;i++){
        T val = this->Dequeue();
        cout<<val<<" ";
        this->Enqueue(val);
    }
    cout<<endl;
}
