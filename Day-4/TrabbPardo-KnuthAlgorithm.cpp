// TPK Algorithm

#include <iostream>
#include <cmath>
using namespace std;
double f(double x){
    return (sqrt(abs(x)) + 5.0* pow(x,3.0));
}
int main(){
    cout<<"Program is based on tpk algorithm\n";
    double arr[11] = {7.9 , 7.3 , 20.9 , 112.0 , 5.0 , 3.0 , 2.9 , 9.0 , 21.7 , 31.2 , 4.1};
    int n = 11;
    for(int i=0;i<n/2;i++){
        double temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }
    cout<<"Your array in reverse order looks like :- {";
    for(int i=0;i<n;i++){
        if(i<n-1)cout<<arr[i]<<",";
        else cout<<arr[i]<<"}";
    }
    cout<<"\nApplying function on each element of array and displaying their result as per limit 400.0\n";
    for(int i=0;i<n;i++){
        if(f(arr[i])<=400.0){
            cout<<f(arr[i])<<endl;
        }
        else{
            cout<<"Value exceeded than 400.0 for "<<arr[i]<<endl;
        }
    }
    return 0;
}