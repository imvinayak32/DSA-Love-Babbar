#include<bits/stdc++.h>
using namespace std;

bool isSorted(int arr[], int size){
    bool ans;

    //base condition
    if(size == 0 || size == 1) return true;

    if(arr[0] > arr[1]) return false;
    else{
        ans = isSorted(arr + 1, size - 1);
    }

    return ans;
}

int main(){

    //int arr[10] = {1, 2, 5, 3, 4, 6, 7, 8, 10, 9};
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr)/sizeof(arr[0]);

    if(isSorted(arr,size)) cout<<"Array is Sorted"<<endl;
    else cout<<"Array is not sorted"<<endl;

    return 0;
}