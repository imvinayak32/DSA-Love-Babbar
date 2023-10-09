#include<bits/stdc++.h>
using namespace std;

bool search2dArray(int arr[][5], int target, int row, int col) {
        int start = 0;
        int end = row*col - 1;

        int mid = start + (end - start)/2;

        while(start <= end){
            int element = arr[mid/col][mid%col];

            if(element == target){
                return 1;
            }

            else if(element < target){
                start = mid + 1;
            }
            else{
                end = mid - 1;
            }
            mid = start + (end - start)/2;
        }
        return 0;
}

void print(int arr[][5], int row, int col){
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){

    int arr[5][5] = {1,2,3,4,5,10,11,12,13,14,15,6,7,8,9,0,11,22,33,44,55,66,77,88,99};

    print(arr, 5, 5);
    
    int target = 22;
    int ans = search2dArray(arr, target, 5, 5);

    if(ans){
        cout<<"Searching in 2d Array for "<<target<<" is present !!"<<endl;
    }
    else{
        cout<<"Searching in 2d Array for "<<target<<" is not present !!"<<endl;
    }
    

    return 0;
}