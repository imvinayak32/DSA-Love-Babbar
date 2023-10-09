#include<bits/stdc++.h>
using namespace std;

// Can't use ~ approach, it will comlpliment all the 32 bits - for this use mask
// (~n) & mask => will give the required answer
// how to create the mask ?
int complimentBase10(int n){
    int mask = 0;
    int m = n;

    if(n == 0){
        return 1;
    }

    while(m != 0){
        mask = (mask<<1) | 1;
        m = m >>1;
    }

    m = (~n) & mask;
    return m;
}


int main(){

    int n;
    cout<<"Enter a number : ";
    cin>>n;


    int ans = complimentBase10(n);
    cout<<"Complement of "<<n<<" is "<<ans<<endl;
   

    return 0;
}