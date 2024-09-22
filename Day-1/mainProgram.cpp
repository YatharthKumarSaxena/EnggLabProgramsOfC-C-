// Ensure power should be whole number
#include <iostream>
#include "powerFunction.cpp"
using namespace std;
int main(){
    cout<<"This program is dedicated to calculate the power of a given number\n";
    int n; // Number
    int k; // Power
    cout<<"Please enter your number = ";
    cin>>n;
    cout<<"Please enter the power of the number = ";
    cin>>k;
    cout<<"The number "<<n<<" to the power "<<k<<" = "<<power(n,k);
    return 0;
}