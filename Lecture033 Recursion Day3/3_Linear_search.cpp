#include<bits/stdc++.h>
using namespace std;

// For Better Understanding ->
// Observe each iteration
void print(int arr[], int n){
    cout<<"Size of Array = "<<n<<endl;

    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int linearSearchRecursive(int arr[], int size, int key){
    print(arr,size);

    //base condition
    if(size == 0) return 0;


    cout<<"Comparing with = "<<arr[0]<<endl<<endl;
    if(key == arr[0]){
        return key;
    }
    else{
        int remainingPart = linearSearchRecursive(arr + 1, size - 1, key);
        return remainingPart;
    }
}


int main(){

    int arr[10] = {1, 2, 5, 3, 4, 6, 7, 8, 10, 9};
    int size = sizeof(arr)/sizeof(arr[0]);
    int key = 10;

    int ans = linearSearchRecursive(arr, size, key);
    
    if(ans)
        cout<<"Element is present"<<endl;
    else 
        cout<<"Element is not present"<<endl;

    return 0;
}