#include<iostream>
using namespace std;

void which_case(int n){
    if(n>='A' && n<='Z') cout<<"This is Uppercase"<<endl;

    else if(n>='a' && n<='z') cout<<"This is Lowercase"<<endl;

    else cout<<"This is numeric"<<endl;
}

int main(){

    char n;
    cout<<"Enter your Character/Number : ";
    cin>>n;

    which_case(n);

    return 0;
}