// Finite loop program
#include <iostream>
using namespace std;
int main(){
    int limit;
    cout<<"Please enter your limit = ";
    cin>>limit;
    int i=1;
    while(true){
        if(i==limit){
            cout<<i<<endl;
            cout<<"Limit reached";
            break;
        }
        cout<<i<<endl;
        i++;
    }
    return 0;
}