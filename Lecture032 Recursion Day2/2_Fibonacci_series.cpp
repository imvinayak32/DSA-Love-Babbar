#include<bits/stdc++.h>
using namespace std;

int fib(int n){

    // Base case
    if(n == 0){
        return 0;
    }
    if(n == 1){
        return 1;
    }

    // Recurssive relation
    int ans = fib(n-1) + fib(n-2);
    return ans;
}

int main(){

    int n = 5;
    cout<<n<<"th fibonaci number = "<<fib(5)<<endl;

    return 0;
}