#include<bits/stdc++.h>
using namespace std;

int sum = 0;

// My Approach
int getSum1(int arr[], int size){

    //base condition
    if(size == 0) return 0;

    getSum1(arr + 1, size - 1);
    sum += arr[0];

    return sum;
}

// Babbar bhaiya's Approach
int getSum2(int arr[], int size){

    //base condition
    if(size == 0) return 0;
    if(size == 1) return arr[0];

    int remainingPart = getSum2(arr + 1, size - 1);
    int sum = arr[0] + remainingPart;

    return sum;
}


int main(){

    int arr[10] = {1, 2, 5, 3, 4, 6, 7, 8, 10, 9};
    int size = sizeof(arr)/sizeof(arr[0]);

    cout<<"Sum of all elements of Array = "<<getSum1(arr,size)<<endl;
    cout<<"Sum of all elements of Array = "<<getSum2(arr,size)<<endl;


    return 0;
}