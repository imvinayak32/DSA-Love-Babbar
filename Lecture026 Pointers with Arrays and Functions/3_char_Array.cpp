#include<bits/stdc++.h>
using namespace std;

void tillNullCharacter(){
    char ch = 'z';
    char *p = &ch;

    // It will print the characters untill it found null character
    cout<<"p = "<<p<<endl;
}

int main(){

    int temp[10] = {2,4,6,8,10,12,14,16,18,20};

    char arr[5] = "abcd";  //one space for null character

    cout<<" integer array temp[] = "<<(temp)<<endl;
    cout<<" character array arr[] = "<<(arr)<<endl;
    cout<<" character array arr[] = "<<(arr + 1)<<endl;

    char *ptr = arr;

    cout<<" ptr = "<<(ptr)<<endl;
    cout<<" &ptr = "<<(ptr + 1)<<endl;




    return 0;
}