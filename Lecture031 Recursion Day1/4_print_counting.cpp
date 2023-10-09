// How to print in reverse pattern

#include<bits/stdc++.h>
using namespace std;

int printCounting(int n){

    if(n == 0) return 0;

    cout<<n<<" ";

    return printCounting(n-1);
}

int main(){

    int n;
    cout<<"Enter your number = "<<endl;
    cin>>n;

    int ans = printCounting(n);
    cout<<endl<<ans<<endl;
    
    return 0;
}