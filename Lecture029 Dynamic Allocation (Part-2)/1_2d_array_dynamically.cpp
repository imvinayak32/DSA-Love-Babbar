#include <bits/stdc++.h>
using namespace std;


int main()
{
    int row, col;
    cout<<"Enter no of rows = ";
    cin>>row;
    cout<<"Enter no of columns = ";
    cin>>col;

    int **arr = new int*[row];

    for (int i = 0; i < row; i++)
    {
        arr[i] = new int[col];
    }

    // Taking input for 2D Array
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cin>>arr[i][j];
        }
    }

    // Printing 2D Array
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    // Releasing space of right hand arrays ka
    // visualize this
    for(int i = 0; i < row; i++){
        delete [] arr[i];
    }

    // Releasing the array of int*
    delete []arr;


    return 0;
}