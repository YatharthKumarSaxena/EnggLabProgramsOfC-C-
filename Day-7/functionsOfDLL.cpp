#include "DoublyLinkedListClass.cpp"

// Insertion Functions

template <class Type>
void DoublyLinkedList<Type>::insertAtHead(Type val){
    ListNode<Type>* temp = new ListNode<Type>(val);
    if(Head == NULL){ // Checking List Is Empty ?
        Head = temp;
        Tail = temp;
        return;
    }
    temp->next = Head;
    Head->prev = temp;
    Head = temp;
    return;
}

template <class Type>
void DoublyLinkedList<Type>::insertAtTail(Type val){
    ListNode<Type>* temp = new ListNode<Type>(val);
    if(Head == NULL){ // Checking List Is Empty ?
        Head = temp;
        Tail = temp;
        return;
    }
    temp->prev = Tail;
    Tail->next = temp;
    Tail = temp;
    return;
}

template <class Type>
void DoublyLinkedList<Type>:: insertAfterNthNode(Type val,int LOC){
    if(LOC<0){
        cout<<"Invalid position\n";
        cout<<"You can enter position from 0 to size of the Doubly Linked List\n";
        return;
    }
    else if(LOC==0){
        cout<<"Insertion at Head Successfull\n";
        insertAtHead(val);
        return;
    }
    else {
        int count = 1;
        ListNode<Type>* temp = Head;
        while(temp && count != LOC){
            temp = temp->next;
            count++;
        }
        if(count == LOC){
            if(temp == NULL){
                cout<<"Invalid position entered by you as it exceeds size of Doubly Linked List\n";
                return;
            }
            else if(temp->next == NULL){
                cout<<"Insertion Successfull at Tail\n";
                insertAtTail(val);
                return;
            }
            else{
                cout<<"Insertion Successfull\n";
                ListNode<Type>* help = new ListNode<Type>(val);
                temp->next->prev = help;
                temp->next = help;
                help->prev = temp;
                return;
            }
        }
        else{
            cout<<"Your LOC exceeds the size of the Doubly Linked list\nHence insertion operation is terminated";
            return;
        }
    }
    return;
}

template <class Type>
void DoublyLinkedList<Type>::insertBeforeNthNode(Type val, int LOC) {
    if(LOC < 1){  // LOC must be 1 or higher
        cout << "Invalid position\n";
        cout << "You can enter position from 1 to the size of the Doubly Linked List + 1\n";
        return;
    } 
    else if(LOC == 1){  // Insert before the 1st node, i.e., at head
        cout << "Insertion at Head Successful\n";
        insertAtHead(val);
        return;
    } 
    else{
        // Call insertAfterNthNode with (LOC - 1) to insert before the Nth node
        cout << "Insertion before position " << LOC << " is being handled using insertAfterNthNode\n";
        insertAfterNthNode(val, LOC - 1);
    }
}



// Deletion Functions

template <class Type>
Type DoublyLinkedList<Type>::deleteAtHead(){
    if(Head == NULL){ // Checking List Is Empty ?
        cout<<"Underflow error\n";
        cout<<"Your Doubly Linked List is empty\n";
        return Type(); // Return default value for Type
    }
    ListNode<Type>* temp = Head;
    if(Head == Tail ){ // If List contain single node only
        Head = NULL;
        Tail = NULL;
    }
    else{
        Head = Head->next;
        Head->prev = NULL;
    }
    int value = temp->val;
    delete temp;
    return value;
}

template <class Type>
Type DoublyLinkedList<Type>::deleteAtTail(){
    if(Head == NULL){ // Checking List Is Empty ?
        cout<<"Underflow error\n";
        cout<<"Your Doubly Linked List is empty\n";
        return Type(); // Return default value for Type
    }
    ListNode<Type>* temp = Tail;
    if(Head == Tail ){ // If List contain single node only
        Head = NULL;
        Tail = NULL;
    }
    else{
        Tail = Tail->prev;
        Tail->next = NULL;
    }
    int value = temp->val;
    delete temp;
    return value;
}

template <class Type>
Type DoublyLinkedList<Type>:: deleteNthNode(int LOC){
    if(Head == NULL){
        cout<<"Underflow error as List is empty\n";
        return Type();
    }
    else if(LOC<1){
        cout<<"Invalid Location Entered\n";
        return Type();
    }
    else if(LOC == 1){ // Delete First Node
        Type val = deleteAtHead();
        return val;
    }
    else{
        int count = 1;
        ListNode<Type>* temp = Head;
        while(temp && count != LOC){
            temp = temp->next;
            count++;
        }
        if(count == LOC){
            if(temp == NULL){
                cout<<"Invalid Location entered by you as it exceeds the size of the Doubly Linked List\n";
                return Type();
            }
            else{
                if(temp->next == NULL){ // Delete Last Node
                    Type val = deleteAtTail();
                    return val;
                }
                temp->prev->next = temp->next;
                temp->next->prev = temp->prev;
                return temp->val;
            }
        }
        else{
            cout<<"Invalid Location entered by you as it exceeds the size of the Doubly Linked List\n";
            return Type();
        }
    }
    return Type();
}

template <class Type>
void DoublyLinkedList<Type>::deleteNodeByValue(Type val){
    if(Head == NULL){
        cout<<"Underflow error as List is empty\n";
        return;
    }
    ListNode<Type>* temp = Head;
    while(temp){
        if(temp->val == val){ // Delete temp node
            cout<<"Deletion Succesfull\n";
            if(temp == Head){
                deleteAtHead();
                return;
            }
            else if(temp == Tail){
                deleteAtTail();
                return;
            }
            else{
                temp->prev->next = temp->next;
                if (temp->next != NULL) {
                    temp->next->prev = temp->prev;
                }
                return;
            }
        }
        temp = temp->next;
    }
    delete temp;
    cout<<"Deletion unsuccessfull as node with value "<<val<<" does not exist\n";
    return;
}

// Display Functions

template <class Type>
void DoublyLinkedList<Type>::display(){
    if(Head == NULL){
        cout<<"Your List is empty\n";
        return;
    }
    ListNode<Type>* temp = Head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl;
    return;
}

template <class Type>
void DoublyLinkedList<Type>::displayReverse(){
    if(Head == NULL){
        cout<<"Your List is empty\n";
        return;
    }
    ListNode<Type>* temp = Tail;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp = temp->prev;
    }
    cout<<endl;
    return;
}

// Additional Functions

template <class Type>
int DoublyLinkedList<Type>::size(){
    int count = 0;
    ListNode<Type>* temp = Head;
    while(temp!=NULL){
        temp = temp->next;
        count++;
    }
    return count;
}

template <class Type>
bool DoublyLinkedList<Type>:: isEmpty(){
    return (Head == NULL);
}

template <class Type>
void DoublyLinkedList<Type>::makeListEmpty(){
    ListNode<Type>* temp = Head;
    while(temp != NULL) {
        ListNode<Type>* next = temp->next;
        delete temp;
        temp = next;
    }
    Head = NULL;
    Tail = NULL;
    cout << "Now, your Doubly Linked List is empty\n";
}

