#include "declaration.h"
// Function to calculate power of any number 
int power(int n,int k){
    int ans = 1;
    for(int i=1;i<=k;i++){
        ans*=n;
    }
    return ans;
}