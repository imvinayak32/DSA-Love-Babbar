// Time Complexity => O(pow(n,2))
#include<bits/stdc++.h>
using namespace std;

// Checking for each number till n weather it is prime or not ??
// It is implemented using isPrime()
int countPrime(int n){
    int count = 0;

    for(int i = 2; i<n; i++){
        if(isPrime(i)){
            count++;
            cout<<i<<" ";
        }
    }
    return count;
}

// Check divisibility with 2 to (n-1) with every i from countPrime()
int isPrime(int n){

    if(n == 1) return 0;
    for(int i = 2; i<n; i++){

        if(n%i == 0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int n = 20;

    int totalPrimes = countPrime(n);
    cout<<endl<<"Total no of primes till "<<n<<" are "<<totalPrimes<<endl;

    return 0;
}