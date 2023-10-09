#include<bits/stdc++.h>
using namespace std;

void sineWavePrint(int arr[][5], int row, int col)
{
    int j;
    for(int i = 0; i< col; i++){

        if(i%2 == 0){
            for(j = 0; j < row; j++){
                cout<<arr[j][i]<<" ";
            }
        }
        else{
            for(j = row - 1; j >= 0; j--){
                cout<<arr[j][i]<<" ";
            }
        }
    }
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
    cout<<"Sine wave print : "<<endl;
    sineWavePrint(arr, 5, 5);

    return 0;
}