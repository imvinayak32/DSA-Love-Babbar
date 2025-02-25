#include<bits/stdc++.h>
using namespace std;

int countPrimes(int n) {
    int count = 0;
    vector<bool> primes(n+1, true);

    primes[0] = primes[1] = 0;

    for(int i = 2; i<n; i++){
            
        if(primes[i]){
            count++;

            for(int j = 2*i; j<n; j+= i){
                primes[j] = 0;
            }
        }
    }
    return count;
}

int main(){

    return 0;
}