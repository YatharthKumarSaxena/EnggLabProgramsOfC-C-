#include "functionsOfQueue.cpp"

void displayMainMenu(){
    cout<<"\nMain Menu is displayed below:- \n";
    cout<<"1. Insert into Queue\n";
    cout<<"2. Delete from Queue\n";
    cout<<"3. Display the Queue\n";
    cout<<"4. Exit Main Program\n";
}
int main(){
    Queue<int>Q;
    while(true){
        displayMainMenu();
        int n;
        cout<<"Please enter your choice:- ";
        cin>>n;
        switch(n){
            case 1:{
                int val;
                cout<<"Please enter the value:- ";
                cin>>val;
                cout<<"Value Enqueued Successfully "<<val<<endl;
                Q.Enqueue(val);
                break;
            }
            case 2:{
                int val = Q.Dequeue();
                cout<<"Value dequed succesfully :- "<<val<<endl;
                break;
            }
            case 3:{
                cout<<"Your Queue is displayed below:-\n";
                Q.display();
                break;
            }
            case 4:{
                cout<<"Exiting main Program\n";
                return 0;
            }
            default:
                cout<<"Invalid Choice\n";
                cout<<"Please try again\n";
                break;
        }
    }
    return 0;
}