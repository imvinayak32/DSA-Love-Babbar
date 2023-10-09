/*
 1. All will be same arr, &arr, &arr[0]
    cout<<"Address of 0th index = "<<&arr<<endl;

 2. difference b/w - post and pre increment only
    cout<<" *arr++ = "<<++(*arr)<<endl;
    cout<<" *arr++ = "<<(*arr)++<<endl;

 3. Accessing array element -> 2 Ways
    arr[i] = *(arr + i)
    OR
    i[arr] = *(i + arr)

*/

#include<bits/stdc++.h>
using namespace std;

int main(){

    int arr[10] = {2,4,6,8,10,12,14,16,18,20};

    cout<<"Value at 0th index = "<<arr[0]<<endl;
    //Accessing Address ->
    cout<<"Address of 0th index = "<<arr<<endl;
    cout<<"Address of 0th index = "<<&arr[0]<<endl;

    // Value at 0th index ->
    cout<<" *arr = "<<*arr<<endl;
    
    // Pre-increment the value stored at 0th index ->
    cout<<" *arr++ = "<<++(*arr)<<endl;

    *arr = *arr + 5;
    cout<<" (*arr = *arr + 5) = "<<(*arr)<<endl;
    cout<<" (++(++(*arr))) = "<<++(++(*arr))<<endl;

    //Incrementing the Address
    cout<<" *(arr + 1) = "<<*(arr + 1)<<endl;
    cout<<" *(arr + 4) = "<<*(arr + 4)<<endl;

    //Accessing Array element ->
    cout<<" arr[3] = "<<arr[3]<<endl;
    cout<<" trying to access same with diff approach = "<<*(arr + 3)<<endl;
    cout<<" trying to access same with diff approach = "<<3[arr]<<endl;


    return 0;
}