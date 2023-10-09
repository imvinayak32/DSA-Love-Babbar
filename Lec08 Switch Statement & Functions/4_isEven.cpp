// Home-Work
// Switch inside a infinte loop, how to get out of this loop via only switch ?
// Use of exit();

#include<iostream>
using namespace std;

bool isEven(){
    int a;
    cout<<"Enter your number = ";
    cin>>a;

    if(a&1) return 0;
    return 1;
}

int main(){

    if(isEven())
        cout<<"Even"<<endl;
    else 
        cout<<"Odd"<<endl;


    return 0;
}