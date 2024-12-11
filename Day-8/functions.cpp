#include "ExceptionClass.cpp"


void divide(int dividend,int divisor){
    if(divisor == 0){
        throw Runtime_Error();
    }
    else{
        cout<<"\nDivision Succesfull\n";
        cout<<dividend<<"/"<<divisor<<" = "<<dividend/divisor<<endl;
        cout<<endl<<endl;
    }
    return;
}

void fetchValueFromAddress(int* A){
    if(A == NULL){
        throw Runtime_Error();
    }
    else{
        cout<<"\nValue fetched Successfully\n";
        cout<<"Value at address "<<A<<" is "<<*A<<endl;
        cout<<endl;
    }
    return;
}


void checkProduct(int num1,int num2,int ans){
    if(num1*num2 == ans){
        cout<<"\nYour Product is Correct\n";
        cout<<endl;
    }
    else{
        cout<<"\nCorrect Answer on product is "<<num1*num2<<" not "<<ans<<endl;
        throw Logic_Error();
    }
}
