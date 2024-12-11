#include "functions.cpp"

void runExceptionHandlingCode(){
try{
        cout<<"\nWe are checking a runtime error by division \n";
        cout<<endl;
        cout<<"Please enter your dividend: ";
        int a;
        cin>>a;
        cout<<"Please enter your divisor: ";
        int b;
        cin>>b;
        divide(a,b);
    }
    catch(Runtime_Error){
        cout<<endl;
        cout<<"Division Unsuccesfull\n";
        cout<<"Runtime Error:- Cannot divide by Zero\n";
        cout<<endl;
    }
    try{
        cout<<"We are checking a runtime error by Null pointer exception\n";
        cout<<"\nPlease enter a 1st value whose address is not made null :- ";
        int x;
        int y;
        int* A;
        int* B;
        cin>>x;
        A = &x;
        fetchValueFromAddress(A);
        cout<<"Please enter a 2nd value whose address is made null :- ";
        cin>>y;
        B = &y;
        B = NULL;
        fetchValueFromAddress(B);
    }
    catch(Runtime_Error){
        cout<<endl;
        cout<<"Runtime Error:- Null pointer Exception\n";
        cout<<"Cannot fetch value from Null Address\n";
        cout<<endl;
    }
    try{
        cout<<"\nWe are checking the logic_failure by checking your product\n";
        cout<<endl;
        int r;
        int t;
        cout<<"Please enter your 1st num:- ";
        cin>>r;
        cout<<"Please enter your 2nd number:- ";
        cin>>t;
        cout<<"Please enter your result of "<<r<<" * "<<t<<" = ";
        int ans;
        cin>>ans;
        checkProduct(r,t,ans);
    }
    catch(Logic_Error){
        cout<<endl;
        cout<<"Logic Error :- Your product is incorrect\n";
        cout<<endl;
    }
    try{
        cout<<"\nWe are checking a bad_alloc exceptionby using built in exception class"<<endl;
        cout<<endl;
        unsigned long size;
        cout<<"Please enter the size of your array:- ";
        cin>>size;
        char* ptr;
        ptr = new char[size];
        cout<<"\nMemory Allocation Successfull\n";
        cout<<endl;
        delete []ptr;
    }
    catch(bad_alloc){
        cout<<endl;
        cout<<"Bad_alloc Exception:- Memory Cannot allocate\n";
        cout<<endl;
    }
}

int main(){
    cout<<"\nWelcome to the program of checking exception handling\n";
    runExceptionHandlingCode();
    return 0;
}