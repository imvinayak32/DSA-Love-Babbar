#include<bits/stdc++.h>
using namespace std;

// 14%2 = 0 ... 64%2 = 0 (can't use this idea)
// Take much more time in calculating the pow() again and again !!
// Not utilizing the previous results of pow() function

int powerOfTwo(int n){
    int m = 0;
    
    if( n <= 0 ) return 0;

    for(int i = 0; i < 32; i++){
        m = pow(2,i);
        if(n == m) return i;
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
    cout<<"Given number "<<n<<" can't be expressed as power of 2"<<endl;
    }
   
   
    return 0;
}