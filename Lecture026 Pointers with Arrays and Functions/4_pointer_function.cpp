/*
    Important to note here !!
    * whenever we pass arr to any function, its pointer is passed (of 0th index)
    * Benefit - we can passed part of array through this as well.
*/
#include<bits/stdc++.h>
using namespace std;

void update(int *p){
    *p = *p + 1;
}

int getSum(int *arr, int n){ //int arr[] OR int *arr -> both are same

    cout<<"Size of arr in function = " <<sizeof(arr)<<endl;
    
    int sum = 0;
    for(int i = 0; i<n; i++){
        sum = sum + i[arr];   //As, arr[i] == i[arr]
    }
    return sum;
}

int main(){
    
    int value = 5;
    int *p = &value;
    // *How the pointer is passed to function
    cout<<"Before = "<<*p<<endl;
    update(p);
    cout<<"After = "<<*p<<endl;



    // *Array and pointer
    int arr[5] = {1, 12, 23, 45, 3};
    // Whole is not passed but the pointer to it is passed !!
    //int sum = getSum(arr, 5);
    //cout<<"Sum is "<<sum<<endl;


    // *Passing a part of whole array
    int sum = getSum(arr+3, 2);
    cout<<"Sum is "<<sum<<endl;

    return 0;
}