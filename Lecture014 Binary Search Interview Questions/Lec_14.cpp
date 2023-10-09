#include<bits/stdc++.h>
using namespace std;

//Question 1 : Pivot/ Equillibrim point -> where the left side sum  = right side
int pivotIndexinArray(int arr[], int n){

    int leftSum = 0;
    int rightSum = 0;
    int totalSum = 0;
    int index = -1;

    for(int i = 0; i<n; i++){
        totalSum = totalSum + arr[i];
    }

    for(int j = 1; j<n; j++){
        leftSum = leftSum + arr[j];
        rightSum = totalSum - leftSum - arr[j+1];

        if(leftSum == rightSum){
            index = (j + 1);
            return index;
        }
    }
    return index;
}

// Question 2 : Finding Pivot element in Sorted & Rotated Array 
int getPivot(int arr[], int n){
    
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start)/2;

    while(start < end){

        if(arr[mid] >= arr[0]){
            start = mid + 1;
        }
        else{
            end = mid;
        }
        mid = start + (end - start)/2;
    }
    return start;
}

int binarySearch(int arr[], int s, int e, int key){

    int start = s;
    int end = e;
    int mid = start + (end - start)/2;
    
    while(start <= end){
    
        if(arr[mid] == key){
            return mid;
            }
        else if(arr[mid] > key){
            end = mid - 1;
            }
        else if(arr[mid] < key){
            start = mid + 1;
            }
        mid = start + (end - start)/2;
    }
    return -1;
}

//Question 3 : Searching in Sorted & Rotated Array 
// Using the Approach of Pivot element
/*
    There 2 more approaches which exist for this problem all three takes O(logn) time but code is lesser in others
*/
int SearchingSortedRotatedArray(int arr[], int n, int k){
    int pivot = getPivot(arr, n);

    if( k >= arr[pivot] && k <= arr[n-1]){
        return binarySearch(arr, pivot, n-1, k);
    }
    else{
        return binarySearch(arr, 0, pivot - 1, k);
    }
}

//Question 4 : Find the square root of an element
int squareRoot(int x) {
        int start = 0;
        int end = x;
        long long int mid = start + (end - start)/2;
        int ans = -1;

        while(start<=end){
            long long int square = mid*mid;

            if(square == x){
                return mid;
            }
            else if(square < x){
                ans = mid;
                start = mid + 1;
            }
            else{
                end = mid - 1;
            }
            mid = start + (end - start)/2;
        } 
        return ans;
}

//Question 5 : Square root answer with floating number
/*
        Problem in precision for huge !!
*/
long double sqRootPrecision(int n, int precision, int ans){
    long double factor = 1;
    long double preiciseAns = 0;

    while(precision >= 1){

        factor = factor / 10;

        for(long double j = ans; j*j <= n; j+= factor ){
            preiciseAns = j;
        }
        precision = precision - 1;
    }
    return preiciseAns;
} 

int main(){
    //int arr[6] = {1, 7, 3, 6, 5, 6};
    // int size = 6;
    // int index = pivotIndexinArray(arr, 6);

    // cout<<"Pivot Index : "<<index<<endl;
    // cout<<"Pivot Element : "<<arr[index]<<endl;

    // int arr[5] = {7, 9, 1, 2, 3};
    // cout<<SearchingSortedRotatedArray(arr, 5, 1)<<endl;

    int n = 72;
    int integerPart = squareRoot(n);
    cout<<"Square root of "<<n<<" is till integer "<<integerPart<<endl;
    cout<<"Square root of "<<n<<" is with precision "<<sqRootPrecision(n, 8, integerPart)<<endl;

    return 0;
}