#include<bits/stdc++.h>
using namespace std;

// int *arr -> as we are working with dynamically allocated memory
int getSum(int *arr, int n){

    int sum = 0;
    for(int i = 0; i<n; i++){
        sum += arr[i];
    }
    return sum;
}

int main(){

    int n;
    cin>>n;

    // Dynamically allocated memory for array arr
    // Accessing the heap memory via pointer *arr
    // new keyword is used for dynamically allocation
    int *arr = new int[n];

    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    int ans = getSum(arr, n);
    cout<<"Sum of Array = "<<ans<<endl;


    return 0;
}