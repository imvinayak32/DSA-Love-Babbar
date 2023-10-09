// through this showing TLE
// Have to solve via Dynamic Programming

#include<bits/stdc++.h>
using namespace std;

int climbStairs(int n) {

    if(n < 0) return 0;
    if( n == 0) return 1;

    int ans = climbStairs(n-1) + climbStairs(n-2);

    return ans;        
}

int main(){

    int n  = 5;

    cout<<"Number of distinct ways of climbing = "<<climbStairs(n)<<endl;

    return 0;
}