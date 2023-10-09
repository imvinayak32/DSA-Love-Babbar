// when a function calls itself it is called as recussion
// jab badi problem ka solution choti problem ke through nikal jaye toh recurssion use karge
// base case will helps us in terminating the infinete loop of dividing the larger problem into smaller one.
// two things are must for recurrsion  - 
//      1. Base condition (must have return staement)
//      2. Recurrence relation

#include<bits/stdc++.h>
using namespace std;

int factorial(int n){

    //base condition
    if(n == 0) 
        return 1;

    int smallerProblem = factorial(n-1);
    int largerProblem = n*smallerProblem;

    return largerProblem;
}

int powerOfTwo(int n){

    //base condition
    if(n == 0) 
        return 1;

    int smallerProblem = powerOfTwo(n-1);
    int largerProblem = 2*smallerProblem;
    
    return largerProblem;
}

int main(){

    int n;
    cout<<"Enter your number = "<<endl;
    cin>>n;

    int ans = factorial(n);
    cout<<"factorial of "<<n<<" = "<<ans<<endl;

    ans = powerOfTwo(n);
    cout<<"Power of two = "<<ans<<endl;
    
    return 0;
}