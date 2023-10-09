#include<iostream>
using namespace std;

void countBits(){
    int count, a, b;
    cout<<"Enter two numbers : ";
    cin>>a>>b;

    while(a || b){
        if(a&1) count++;
        a = a>>1;

        if(b&1) count++;
        b = b>>1;
    }
    cout<<"Number of 1 bits = "<<count<<endl;
}


int main(){

    countBits();


    return 0;
}