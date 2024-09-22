// Infinte Loop program 
#include <iostream>
using namespace std;
int main(){
    double limit;
    cout<<"Please enter your limit = ";
    cin>>limit;
    double i=1.0;
    while(true){
        if(i==limit){
            cout<<i<<endl;
            cout<<"Limit reached";
            break;
        }
        cout<<i<<endl;
        i += 0.1;
    }
    return 0;
}