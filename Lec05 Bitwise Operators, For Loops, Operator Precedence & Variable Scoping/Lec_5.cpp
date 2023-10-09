#include<iostream>
using namespace std;

// Problem - 1: Fibonacci Series
void fib(int n){
    int a = 0;
    int b = 1;
    int nextNumber;

    cout<<a<<" "<<b<<" ";

    for(int i = 1; i<=n; i++){
        nextNumber = a+b;
        cout<<nextNumber<<" ";
        a = b;
        b = nextNumber;
    }
}

//Problem - 2: Prime Number or not?
void prime(int n){
    int isPrime = 1;

    for(int i = 2; i<n; i++){

        if(n%i == 0){
            isPrime = 0;
            break;
        }
    }

    if(isPrime == 1) cout<<n<<" is a Prime number"<<endl;
    else cout<<n<<" is not a Prime number"<<endl;
}

// LeetCode Problems - 
// Question 1 : Subtract the Product and Sum of digits of any integer.
// Here, lastDigit = n%10
int question1(int n){
        int product = 1, sum = 0;
        while (n)   //run, untill it become zero
        {
            product *= n%10;
            sum += n%10;
            n /= 10;
        }
        return (product - sum);
}

// Question 2 : Counting no. of 1's
// Retriving last bit one by one using (n&1) then (n = n >>1)
int question2(int n){
    int count = 0;
    while (n != 0){
        if(n&1) count++;
        n = n>>1;
    }
    return count;
}

int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    cout<<endl;

    // fib(n);
    // prime(n);
    //cout<<"Difference of Product & Sum : "<<question1(n)<<endl;
    //cout<<"Number of 1's : "<<question2(n)<<endl;

    return 0;
}
