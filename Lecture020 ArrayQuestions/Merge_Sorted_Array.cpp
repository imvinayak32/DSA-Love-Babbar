#include<bits/stdc++.h>
using namespace std;

void mergeSorted(int arr1[], int m, int arr2[], int n, int arr3[]){
    int i = 0, j = 0, k = 0;

    while(i < m && j < n){
        if(arr1[i] < arr2[j]){
            arr3[k++] = arr1[i++];
        }

        else{
            arr3[k++] = arr2[j++];
        }
    }

    while(i < m){
        arr3[k++] = arr1[i++];
    }

    while(j < n){
        arr3[k++] = arr2[j++];
    }

}

void print(int arr[], int m){
    for(int i = 0; i<m; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){

    int arr1[7] = {1, 4, 9, 13, 21, 34, 56};
    int arr2[5] = {10, 34, 45, 76, 98};
    int arr3[12] = {0};

    cout<<"Array 1 : "<<endl;
    print(arr1, 7);
    cout<<"Array 2 : "<<endl;
    print(arr2, 5);
    mergeSorted(arr1, 7, arr2, 5, arr3);
    print(arr3, 12);



    return 0;
}