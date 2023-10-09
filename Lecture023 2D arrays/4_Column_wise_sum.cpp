#include<bits/stdc++.h>
using namespace std;

void columnWiseSum(int arr[][4], int row, int col){
    
    for(int i = 0; i<col; i++){
        int sum = 0;
        for(int j = 0; j<row; j++){
            sum += arr[j][i];
        }
        cout<<i<<" Column sum = "<<sum<<endl;
    }
}

int main(){

    int arr[3][4] = {{1,11,111,1111}, {2,22,222,2222}, {3,33,333,3333}};

    cout<<"2d - Array :"<<endl;

    for(int i = 0; i<3; i++){
        for(int j = 0; j<4; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    columnWiseSum(arr, 3, 4);

    return 0;
}