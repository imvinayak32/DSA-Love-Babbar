#include<bits/stdc++.h>
using namespace std;

int binarySearch(int a[], int key, int n){
    int start = 0;
    int end = n - 1;

    // start + end -> overflow the int capacity
    //To avoid this we need to use this approach !!
    int mid = start + (end - start)/2;
    
    while(start <= end){
    
    if(a[mid] == key){
        return mid;
        }
    else if(a[mid] > key){
        end = mid - 1;
    //
        }
    else if(a[mid] < key){
        start = mid + 1;
        }
    mid = start + (end - start)/2;
    }

    return -1;
}

int main(){
    int arr[10] = { 1, 3, 6, 7, 10, 15, 23, 41, 67, 70};
    int key  = 7;

    cout<<"Element "<<key<<" found out at index "<<binarySearch(arr, key, 10)<<endl;

    return 0;
}