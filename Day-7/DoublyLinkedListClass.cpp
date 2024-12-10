#include <iostream>
using namespace std;

template <class Type>
class ListNode{
public:
    Type val; // Data it will Store or INFO Part of ListNode
    ListNode* prev; // Back Pointer
    ListNode* next; // Forward Pointer
    // Parameterized Constructor
    ListNode(Type val){
        this->val = val;
        this->prev = NULL;
        this->next = NULL;
    }
};

template <class Type>
class DoublyLinkedList{

    // Data Members
    ListNode<Type>* Head;
    ListNode<Type>* Tail;

public:

    // Default Constructor
    DoublyLinkedList(){
        this->Head = NULL;
        this->Tail = NULL;
    }

    // Member Functions
    void insertAtHead(Type val);
    void insertAtTail(Type val);
    void insertAfterNthNode(Type val,int LOC);
    void insertBeforeNthNode(Type val,int LOC);
    Type deleteAtHead();
    Type deleteAtTail();
    Type deleteNthNode(int LOC);
    void deleteNodeByValue(Type val);
    void display();
    void displayReverse();
    bool isEmpty();
    int size();
    void makeListEmpty();
};