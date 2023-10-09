/*
    *ptr -> de-refrencing the ptr
         -> accessing the value at address which is stored by ptr

    &ptr -> Address-of operator
         -> Accessing the address of ptr
*/

#include<bits/stdc++.h>
using namespace std;

void basicStart(){
    
    int num = 10;
    cout<<"Value of num "<<num<<endl;
    cout<<"Address of num "<<&num<<endl;

    int *ptr = &num;

    // Value of ptr is same as the address of num
    // As pointer ptr is pointing towards the variable num 
    cout<<"Value pointed by ptr "<<(*ptr)<<endl;
    cout<<"Value of ptr : "<<ptr<<endl;
    cout<<"Address of ptr : "<<&ptr<<endl;
}

void badPractice(){

    int ptr;
    // Uninitializing pointer is a very bad practice !!
    // It could even point to some unknown memory (dangerous) !

    int *ptr2 = 0;
    cout<<*ptr2<<endl;
    // Showing error -> Segmentation Fault
    // pointing to some unknown memory

}

void sizeofPointer(int num, int *ptr, double *ptr2, char *ptr3){
    
    // sizeof()
    cout<<"Size of variable : "<<sizeof(num)<<endl;

    //Size of pointer will be 8 byte as it always stores addresses
    cout<<"Size of address : "<<sizeof(ptr)<<endl;
    cout<<"Size of address : "<<sizeof(ptr2)<<endl;
    cout<<"Size of address : "<<sizeof(ptr3)<<endl;
}

int main(){

    int num = 10;
    double var = 12.3;
    char ch = 'a';

    int *ptr = &num;
    double *ptr2 = &var;  
    char *ptr3 = &ch;  

    cout<<"Value pointed by ptr2 "<<(*ptr2)<<endl;
    cout<<"Value pointed by ptr3 "<<(*ptr3)<<endl;    
    
    // Incorrect way
    //int *ptr2 = &var;

    basicStart();
    sizeofPointer(num, ptr, ptr2, ptr3);    
    badPractice();

    return 0;
}