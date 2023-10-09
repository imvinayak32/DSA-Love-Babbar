#include<bits/stdc++.h>
using namespace std;

int powerOfTwo(int n){

    // ## Through turnary operator ->
    int ans = (n == 0) ? 1 : 2*powerOfTwo(n-1);
    return ans;

}

int main(){

    int n;
    cout<<"Enter your number = "<<endl;
    cin>>n;

    int ans = powerOfTwo(n);
    cout<<"Answer will be "<<ans<<endl;
    
    return 0;
}