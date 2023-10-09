#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void selectionSort(int a[], int n){
    int j;

    for(int i = 0; i < n - 1; i++){
        int minIndex = i;

        for(j = i + 1; j < n; j++){
                if(a[j] < a[minIndex]) minIndex = j;
                printArray(a,8);
        }
        swap(a[i], a[minIndex]);
        cout<<endl;
    }
}

void bubbleSort(int arr[], int n){
    bool swapped = false;

    for(int i = 0; i < n-1; i++){

        for(int j = 0; j < n - i - 1; j++){
            if(arr[j] > arr[j + 1]){
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }

        if(swapped == false) break;
    }
}

void insertionSort(int arr[], int n){

    for(int i = 1; i < n; i++){
        int temp = arr[i];
        int j = i - 1;
        
        for(; j >= 0; j--){
        // Shift all elements from (j + 1) to (i - 1) by one place
            if(arr[j] > temp) arr[j + 1] = arr[j];
            else break;
        }

        arr[j + 1] = temp;
    }
}


int main(){
    int arr[8] = {64, 45, 6, 70, 12, 10, 3, 34};
    printArray(arr, 8);
    
    //selectionSort(arr, 8);
    // cout<<"Using Selection Sorting : "<<endl;
    // printArray(arr, 8);

    //bubbleSort(arr, 8);
    // cout<<"Using Bubble Sorting : "<<endl;
    // printArray(arr, 8);

    insertionSort(arr,8);
    cout<<"Using Insertion Sorting : "<<endl;
    printArray(arr, 8);


    return 0;
}