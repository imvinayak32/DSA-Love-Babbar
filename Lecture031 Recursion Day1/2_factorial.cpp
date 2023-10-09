#include<bits/stdc++.h>
using namespace std;

int factorial(int n){
    
    // ## Through turnary operator ->
    int ans = (n == 0) ? 1 : n*factorial(n-1);
    
    return ans;
}

int main(){

    int n;
    cout<<"Enter your number = "<<endl;
    cin>>n;

    int ans = factorial(n);
    cout<<"Answer will be "<<ans<<endl;
    
    return 0;
}