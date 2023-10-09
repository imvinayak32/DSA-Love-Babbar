#include<bits/stdc++.h>
using namespace std;

// Approach 2 : 
int powerOfTwo(int n){
    int m = 1;
    if( n <= 0 ) return 0;

    for(int i = 0; i < 30; i++){
        if(n == m) return i;

        if(n<INT_MAX/2) //Condition to avoid int overflow case !!
        m = m * 2;
    }
    return 0;
}


int main(){

    int n;
    cout<<"Enter a number : ";
    cin>>n;


    int ans = powerOfTwo(n);


    if(ans){
    cout<<"Given number "<<n<<" can be expressed as power of 2 times "<<ans<<endl;
    }
    else{
    cout<<"Given number "<<n<<" can't be expressed as power of 2"<<endl;}
   
    return 0;
}

