#include<bits/stdc++.h>
using namespace std;

int partition(int *arr, int start, int end){
    
    int pivot = arr[start];

    int count = 0;
    for(int i = start + 1; i <= end; i++){

        if(arr[i] <= pivot){
            count++;
        }
    }

    // Place pivot at right place
    int pivotIndex = start + count;
    swap(arr[pivotIndex], arr[start]);

    // Left and Right part ko  sahi karna hai 
    int i = start, j = end;

    while(i < pivotIndex && j > pivotIndex){

        while(arr[i] <= pivot){
            i++;
        }
        while(arr[j] > pivot){
            j--;
        }
        if(arr[i] > pivot && arr[j] < pivot){
            swap(arr[i++], arr[j--]);
        }
    }

    return pivotIndex;

}

void quickSort(int arr[], int start, int end){

    if(start >= end){
        return;
    }
    
    int pivotIndex = partition(arr, start, end);

    //Left part
    quickSort(arr, start, pivotIndex - 1);

    //Right part
    quickSort(arr, pivotIndex + 1, end);
}

void print(int arr[], int size){
    for(int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){

    //int arr[] = {1, 12, 33, 13, 100, 56, 34};
    int arr[] = {1, 2, 5, 3, 7, 8, 10, 9, 6};
    int size = sizeof(arr)/sizeof(arr[0]);

    cout<<"Array before Quick Sort  : "<<endl;
    print(arr, size);

    quickSort(arr, 0, size - 1);
        
    cout<<"Array after Quick Sort  : "<<endl;
    print(arr, size);

    return 0;
}