#include<iostream>
using namespace std;

int prime(int n){
    int i = 2;
    
    while(i<n){
        if(n%i == 0){
            cout<<"Non-Prime Number"<<endl;
            return 0;
        }
        i++;
    }
    cout<<"Prime Number"<<endl;
    return 0;
}

int main(){
    
    int n;
    cout<<"Enter your Number : ";
    cin>>n;

    prime(n);

    return 0;
}