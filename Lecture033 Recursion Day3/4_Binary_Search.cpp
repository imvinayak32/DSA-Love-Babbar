#include<bits/stdc++.h>
using namespace std;

// For Better Understanding ->
// Observe each iteration
void print(int arr[], int start, int end){
    cout<<"Size of Array = "<<end+1<<endl;

    for(int i = start; i<=end; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int binarySearchRecursive(int arr[], int key, int start, int end){
        print(arr,start,end);

    //base condition
    if(start > end) return 0;

    int mid = start + (end - start)/2;
        cout<<"Comparing with = "<<arr[mid]<<endl<<endl;

    // Processing
    if(key == arr[mid]){
        return mid;
    }

    //Recursive Relation
    else if(key > arr[mid]){
        return binarySearchRecursive(arr, key, mid+1, end);
    }
    else{
        return binarySearchRecursive(arr, key, start, mid-1);
    }
}


int main(){

    int arr[10] = {1, 2, 5, 3, 4, 6, 7, 8, 10, 9};
    int size = sizeof(arr)/sizeof(arr[0]);
    int key = 100;

    int ans = binarySearchRecursive(arr, key, 0, size-1);
    
    if(ans)
        cout<<"Element is present"<<endl;
    else 
        cout<<"Element is not present"<<endl;

    return 0;
}