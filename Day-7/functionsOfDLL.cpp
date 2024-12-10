#include "DoublyLinkedListClass.cpp"

// Insertion Functions

template <class Type>
void DoublyLinkedList<Type>::insertAtHead(Type val){
    ListNode<Type>* temp = new ListNode(val);
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
    ListNode<Type>* temp = new ListNode(val);
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
        cout<<"You can enter position from -1 to size of the Doubly Linked List\n";
        return;
    }
    else if(LOC==0){
        cout<<"Insertion at Head Successfull\n";
        insertAtHead(val);
        return;
    }
    else {
        int count = 1;
        ListNode* temp = Head;
        while(temp && count != LOC){
            temp = temp->next;
            count++;
        }
        if(count == LOC){
            if(temp == NULL){
                cout<<"Insertion at Tail Successfull";
                insertAtTail(val);
                return;
            }
            else{
                ListNode* help = new ListNode(val);
                help->next = temp->next;
                if(temp->next != NULL){
                    temp->next->prev = help;
                }
                temp->next = help;
                help->prev = temp;
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
    if(LOC < 1) {
        cout << "Invalid position\n";
        cout << "You can enter position from 1 to size of the Doubly Linked List\n";
        return;
    }
    else if(LOC == 1) { // If we need to insert the node before Head i.e insertion at head
        cout << "Insertion at Head Successful\n";
        insertAtHead(val);
        return;
    }
    else{
        int count = 2; 
        ListNode* temp = Head;
        while(temp && count != LOC){
            temp = temp->next;
            count++;
        }
        if(count == LOC && temp != NULL){ // Insert before temp node
            ListNode* help = new ListNode(val);
            help->next = temp;
            help->prev = temp->prev;
            // Update the previous node's next pointer (if it exists)
            if(temp->prev != NULL){
                temp->prev->next = help;
            }
            // Update temp's prev to point to the new node
            temp->prev = help;
            // Edge case: If the new node is inserted at the beginning, update Head
            if (temp == Head) {
                Head = help;
            }
        }
        else {
            cout << "Your LOC exceeds the size of the Doubly Linked list\n";
            cout << "Hence insertion operation is terminated\n";
            return;
        }
    }
    return;
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
    return temp->val;
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
    return Tail->val;
}

template <class Type>
Type DoublyLinkedList<Type>:: deleteNthNode(int LOC){
    if(Head == NULL){
        cout<<"Underflow error as List is empty\n";
        return Type();
    }
    else if(LOC<1){
        cout<<"Inalid Location Entered\n";
        return Type();
    }
    else if(LOC == 1){ // Delete First Node
        Type val = deleteAtHead();
        return val;
    }
    else{
        int count = 1;
        ListNode* temp = Head;
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
    ListNode* temp = Head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    return;
}

template <class Type>
void DoublyLinkedList<Type>::displayReverse(){
    if(Head == NULL){
        cout<<"Your List is empty\n";
        return;
    }
    ListNode* temp = Tail;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp = temp->prev;
    }
    return;
}

// Additional Functions

template <class Type>
int DoublyLinkedList<Type>::size(){
    int count = 0
    ListNode* temp = Head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
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
void DoublyLinkedList<Type>:: makeListEmpty(){
    cout<<"Now, your Doubly Linked List is empty\n";
    Head = NULL;
    Tail = NULL;
    return;
}
