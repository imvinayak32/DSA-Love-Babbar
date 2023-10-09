#include<bits/stdc++.h>
using namespace std;

void wayofInitialization(){
    int number = 34;

    // 1st Way
    int *ptr = &number;
    cout<<"Value pointed by ptr : "<<*ptr<<endl;

    // 2nd Way
    int *q = 0;
    q = &number;
    cout<<"Value pointed by q : "<<*q<<endl;

}

void copyMethods(){

    // 'num' is passed as a copy to 'a'
    int num = 10;
    int a = num;
    cout<<"Value of num before a : "<<num<<endl;
    a++;
    // No chnages of a will reflect into num
    cout<<"Value of num after a : "<<num<<endl;
    cout<<"Value of a : "<<a<<endl;

    int *ptr = &num;
    (*ptr)++;
    cout<<"Value of num after ptr increment : "<<num<<endl;

}

void copyingPointer(){
    int num = 10;

    int *p = &num;
    // Copying pointer
    int *q = p;

    // Values are same in both p and q
    cout<<p<<" - "<<q<<endl;
    // Pointing towards the same value
    cout<<*p<<" - "<<*q<<endl;
}

int main(){

    // wayofInitialization();
    // copyMethods();
    // copyingPointer();

    
    // Important Concept
    int i = 5;
    int *ptr = &i;
    cout<<"Value in ptr : "<<*ptr<<endl;
    cout<<"ptr : "<<ptr<<endl;

    //cout<<(*ptr)++<<endl;
    //cout<<*ptr++<<endl;

    *ptr = *ptr + 1;
    cout<<"Value in ptr : "<<*ptr<<endl;



    // Unique behaviour - as it start pointing to new location
    // Actually,    
    // ptr = ptr + (no of times)(size of datatype)
    ptr = ptr + 1;
    cout<<"Value in ptr : "<<*ptr<<endl;
    cout<<"ptr : "<<ptr<<endl;
    
    
    
    return 0;
}