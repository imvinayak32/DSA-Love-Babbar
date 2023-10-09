#include<bits/stdc++.h>
using namespace std;

void update(int n){
    n++;
    cout<<"Value of n in update block "<<n<<endl;
}

void update2(int &n){
    n++;
    cout<<"Value of n in update block "<<n<<endl;
}


int main(){

    // int i = 10;
    // cout<<"Value of i = "<<i<<endl;

    // // Creation of Reference Variable 
    // int &j = i;
    // cout<<"Value of j = "<<j<<endl;

    // i++;
    // cout<<"Value of i++ = "<<i<<endl;
    // cout<<"Value of j = "<<j<<endl;

    // j++;
    // cout<<"Value of j++ = "<<j<<endl;
    // cout<<"Value of i = "<<i<<endl;

    int n = 10;

    cout<<"Value of n = "<<n<<endl;
    
    update(n);
    cout<<"Updated value of n inside main  = "<<n<<endl;

    update2(n);
    cout<<"Updated value of n inside main = "<<n<<endl;



    return 0;
}