#include<bits/stdc++.h>
using namespace std;

void mergeArray(int *arr, int start, int end){

    int mid = start + (end - start)/2;

    int len1 = mid - start + 1;
    int len2 = end - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    //Copy Values
    int mainArrayIndex = start;

    for(int i = 0; i<len1; i++){
        first[i] = arr[mainArrayIndex++];
    }

    mainArrayIndex = mid + 1;

    for(int i = 0; i<len2; i++){
        second[i] = arr[mainArrayIndex++];
    }

    // Merge 2 Sorted arrays
    int index1 = 0;
    int index2 = 0;
    mainArrayIndex = start;

    while(index1 < len1 && index2 < len2){

        if(first[index1] < second[index2]){
            arr[mainArrayIndex++] = first[index1++]; 
        }
        else{
            arr[mainArrayIndex++] = second[index2++]; 
        }
    }

    while(index1 < len1){
        arr[mainArrayIndex++] = first[index1++]; 
    }

    while(index2 < len2){
        arr[mainArrayIndex++] = second[index2++]; 
    }

    delete [] first;
    delete [] second;
}

void mergeSort(int arr[], int start, int end){

    int mid = start + (end - start)/2;

    if(start >= end){
        return;
    }

    //Left part
    mergeSort(arr,start,mid);

    //Right part
    mergeSort(arr, mid+1, end);

    mergeArray(arr,start,end);
}

void print(int arr[], int m){
    for(int i = 0; i<m; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){

    int arr[] = {1, 12, 33, 13, 100, 56, 34};
    int size = sizeof(arr)/sizeof(arr[0]);

    cout<<"Array before Merge Sort  : "<<endl;
    print(arr, size);

    mergeSort(arr, 0, size - 1);
        
    cout<<"Array after Merge Sort  : "<<endl;
    print(arr, size);

    return 0;
}