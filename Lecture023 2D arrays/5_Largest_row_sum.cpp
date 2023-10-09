#include<bits/stdc++.h>
using namespace std;

void rowWiseSum(int arr[][4], int row, int col){
    
    for(int i = 0; i<row; i++){
        int sum = 0;
        for(int j = 0; j<col; j++){
            sum += arr[i][j];
        }
        cout<<i<<" Row sum = "<<sum<<endl;
    }
}

int largestRowSum(int arr[][4], int row, int col){
    int maxi = INT_MIN;
    int rowIndex = -1;

    for(int i = 0; i<row; i++){
        int sum = 0;
        for(int j = 0; j<col; j++){
            sum += arr[i][j];
        }
        
        if(sum > maxi){
            maxi = sum;
            rowIndex = i;
        }
    }

    cout<<"Maximum row sum : "<<maxi<<endl;
    return rowIndex;
}


int main(){

    int arr[3][4] = {{1,11,111,1111}, {2,22,222,2222}, {3,33,333,3333}};

    for(int i = 0; i<3; i++){
        for(int j = 0; j<4; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    rowWiseSum(arr, 3, 4);

    int ans = largestRowSum(arr, 3, 4);
    cout<<"Row with max sum : "<<ans<<endl;

    return 0;
}