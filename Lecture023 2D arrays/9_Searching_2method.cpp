#include<bits/stdc++.h>
using namespace std;

bool search2dArrayMethod2(int arr[][5], int target, int row, int col) {
        int rowIndex = 0;
        int colIndex = col - 1;

        while(rowIndex < row && colIndex >= 0){
            int element = arr[rowIndex][colIndex];

            if(element == target){
                return 1;
            }

            else if(element < target){
                rowIndex++;
            }
            else{
                colIndex--;
            }
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

    int arr[5][5] = {1,4,7,11,15,2,5,8,12,19,3,6,9,16,22,10,13,14,17,24,18,21,23,26,30};

    print(arr, 5, 5);
    
    int target = 220;
    int ans =  search2dArrayMethod2(arr, target, 5, 5);

    if(ans){
        cout<<"Searching in 2d Array for "<<target<<" is present !!"<<endl;
    }
    else{
        cout<<"Searching in 2d Array for "<<target<<" is not present !!"<<endl;
    }
    

    return 0;
}