#include<bits/stdc++.h>
using namespace std;

bool isPresent(int arr[][4], int target, int row, int col){
    
    for(int i = 0; i<3; i++){
        for(int j = 0; j<4; j++){
            if(arr[i][j] == target) return 1;
        }
    }
    return 0;
}

int main(){

    int arr[3][4] = {{1,11,111,1111}, {2,22,222,2222}, {3,33,333,3333}};

    for(int i = 0; i<3; i++){
        for(int j = 0; j<4; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    int target;
    cout<<"Enter target : ";
    cin>>target;

    if(isPresent(arr, target, 3, 4)){
        cout<<"Element found"<<endl;
    }
    else{
        cout<<"Element not found"<<endl;
    }

    return 0;
}