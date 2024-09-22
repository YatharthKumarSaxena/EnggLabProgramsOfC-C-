// Square root program
#include <iostream>
#include "BabylonianAlgorithm.cpp"
using namespace std;
int main(){
    cout<<"This program is dedicated to calculate the square root of a number\n";
    cout<<"Please enter your number = ";
    double n;
    cin>>n;
    if(n<0){
        cout<<"Since number is negative, imaginary root exist\n";
        cout<<"The square root of number "<<n<<" = "<<sqrt(-n)<<"i\n";
        cout<<"Here i is iota i.e square root of -1\n";
    }
    else{
        cout<<"Since number is positive, real root exist\n";
        cout<<"The square root of a number "<<n<<" = "<<sqrt(n);
    }
    return 0;
}