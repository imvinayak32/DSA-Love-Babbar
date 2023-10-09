#include<iostream>
using namespace std;

void power(){
    int a, b, ans = 1;
    cout<<"Enter your number = ";
    cin>>a>>b;

    for(int i = 1; i<=b; i++){
        ans = ans*a;
    }
    cout<<a<<" to the power "<<b<<" is "<<ans<<endl;
}


int main(){

    power();

    return 0;
}