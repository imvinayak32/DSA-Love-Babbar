#include <bits/stdc++.h>
using namespace std;

void mostOccuredNumber(int arr[], int n){
    int count = 1, maxOcc = 0, maxCount = 0;

    for(int i = 0; i < n; i++){

        for(int j = i + 1; j<n; j++){
            if(arr[j] == arr[i]){
                count++;
            }
        }

        if(count > maxCount){
            maxCount = count;
            maxOcc = arr[i];
        }
        count = 1;
    }
    cout<<"Most occuring element  = "<<maxOcc<<endl;
    cout<<"Number of times "<<maxOcc<<" occuring = "<<maxCount<<endl;
}

// void print2dArray(int a[][], int n){
// }

int main(){
    // int arr[] = {12, 3, 5, 67, 10, 8, -1, 40, 0, 34, 12, 100, 0, 10, 34};
    // int n = sizeof(arr)/ sizeof(arr[0]);
    //mostOccuredNumber(arr,n);

    int a[5][5];
    int n = 5;
    int sum = 0;

    //Taking input
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            cout<<"Row "<<i<<" Column "<<j<<" Enter value = ";
            cin>>a[i][j];
        }
    }
    
    //Printing array
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    //Sum of element of 2d Array
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            sum += a[i][j]; 
        }
        cout<<endl;
    }
    cout << "Sum is "<<sum<<endl;
    return 0;
}

    // try {
    //     // Code that might throw an exception
    //     int numerator = 10;
    //     int denominator = 0;
    //     int result = numerator / denominator; // This will cause a division by zero exception
    // } catch (const exception& e) {
    //     // Catch and handle the exception
    //     cout << "An exception occurred: " << e.what() << endl;
    // }

    
    
    // int max = arr[0];
    // int secondMax = 0;

    // for(int i = 0; i < n; i++){
    //     if(max < arr[i]){
    //         secondMax = max;
    //         max = arr[i];
    //     }
    // }
    // cout<<"Maximum value in the array = "<<max<<endl;
    // cout<<"Second Maximum value in the array = "<<secondMax<<endl;


