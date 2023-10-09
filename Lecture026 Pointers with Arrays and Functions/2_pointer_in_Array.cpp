#include<bits/stdc++.h>
using namespace std;

int main(){

    int temp[10] = {2,4,6,8,10,12,14,16,18,20};

    cout<<"Size of temp = "<<sizeof(temp)<<endl;
    cout<<"Size of *temp = "<<sizeof(*temp)<<endl; // integer -> 4
    cout<<"Size of &temp = "<<sizeof(&temp)<<endl; // addrress -> 8

    int *ptr = temp;
    cout<<"Size of ptr = "<<sizeof(ptr)<<endl; // ptr itself!!
    cout<<"Size of &ptr = "<<sizeof(&ptr)<<endl; //addrress of ptr
    cout<<"Size of *ptr = "<<sizeof(*ptr)<<endl; // pointing to integer


    //temp = temp + 1;

    ptr = ptr + 1;
    cout<<"ptr by 1 = "<<*ptr<<endl;
    ptr = ptr + 2;
    cout<<"ptr by 2 again = "<<*ptr<<endl;

    return 0;
}