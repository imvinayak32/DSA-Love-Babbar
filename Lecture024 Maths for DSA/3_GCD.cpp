#include<bits/stdc++.h>
using namespace std;

// gcd(a,b) = gcd(a-b,b) untill they become same.

int findGcd(int x, int y)
{
    while(x != y){
        if(x>y) x = x - y;
        else y = y - x;
    }
    return x;
}

int main(){

    int a = 72;
    int b = 12;

    int ans = findGcd(a,b);
    cout<<"GCD of "<<a<<" & "<<b<<" = "<<ans<<endl;

    return 0;
}