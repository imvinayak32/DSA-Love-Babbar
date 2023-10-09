#include<bits/stdc++.h>
using namespace std;

void spiralWavePrint(int input[][5], int row, int col){
    int total = row*col;
    int count = 0;
    //indexs - 
    int startRow = 0;
    int startCol = 0;
    int endRow = row - 1;
    int endCol = col - 1;

    while(count < total){

        //Printing starting row
        for(int i = startCol; count < total && i<= endCol; i++){
            cout<<input[startRow][i]<<" ";
            count++;
        }
        startRow++;

         //Printing ending column
        for(int i = startRow;  count < total && i<= endRow; i++){
            cout<<input[i][endCol]<<" ";
            count++;
        }
        endCol--;

        //Printing ending row
        for(int i = endCol;  count < total && i >= startCol; i--){
            cout<<input[endRow][i]<<" ";
            count++;
        }
        endRow--;

        //Printing starting column
        for(int i = endRow;  count < total && i>= startRow; i--){
            cout<<input[i][startCol]<<" ";
            count++;
        }
        startCol++;
    }
}

void print(int arr[][5], int row, int col){
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cout<<arr[i][j]<<"  ";
        }
        cout<<endl;
    }
}

int main(){

    int arr[5][5] = {1,2,3,4,5,10,11,12,13,14,15,6,7,8,9,0,11,22,33,44,55,66,77,88,99};

    print(arr, 5, 5);
    cout<<"Spiral wave print : "<<endl;
    spiralWavePrint(arr, 5, 5);

    return 0;
}