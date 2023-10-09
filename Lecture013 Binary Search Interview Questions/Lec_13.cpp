#include<bits/stdc++.h>
using namespace std;

// Question 1 - 
int firstOccurence(int arr[], int n, int key){
    int start = 0;
    int end = n - 1;
    int mid = start + (end-start)/2;
    int ans = -1;

    while( start <= end){
        if(arr[mid] == key){
            ans = mid;
            end = mid -1;
        }
        else if( arr[mid] > key){
            end = mid - 1;
        }
        else if( arr[mid] < key){
            start = mid + 1;
        }

        mid = start + (end-start)/2;
    }

    return ans;
}

int lastOccurence(int arr[], int n, int key){
    int start = 0;
    int end = n - 1;
    int mid = start + (end-start)/2;
    int ans = -1;

    while( start <= end){
        if(arr[mid] == key){
            ans = mid;
            start = mid + 1;
        }
        else if( arr[mid] > key){
            end = mid - 1;
        }
        else if( arr[mid] < key){
            start = mid + 1;
        }
        mid = start + (end-start)/2;
    }
    
    return ans;
}

int totalOccurence(int arr[], int n, int key){
    int firstTime = firstOccurence(arr, n, key);
    int lastTime = lastOccurence(arr, n, key);

    int total = lastTime - firstTime + 1; 
    return total;
}

// Question 2 - 
int peakIndexInMountainArray(int arr[], int n) {

    int start = 0;
    int end = n - 1;
    int mid = start + (end - start)/2;

    while(start < end){

     if(arr[mid] < arr[mid +1]){
         start = mid + 1; 
     }
     else{
         end = mid;
     }
         mid = start + (end - start)/2;
    }
    return start;
}

int main(){

    //int arr[13] = { 1, 3, 6, 7, 10, 10, 10, 10 , 10, 23, 70, 70, 70};
    int arr[10] = {1, 2, 4, 10, 5, 3};
    int key = 70;

    // cout<<"First Occurence of "<<key<<" will be at "<<firstOccurence(arr, 13, key)<<endl;
    // cout<<"Last Occurence of "<<key<<" will be at "<<lastOccurence(arr, 13, key)<<endl;
    // cout<<"Total Occurences = "<<totalOccurence(arr, 13, key)<<endl;

    int index = peakIndexInMountainArray(arr, 10);
    cout<<"Peak element at the index "<<index<<" is "<<arr[index]<<endl;

    return 0;
}