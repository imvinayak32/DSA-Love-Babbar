#include<iostream>
using namespace std;

int sum(int n){
    int sum = 0, a = 1;
    while(a<=n){
        sum = sum + a;
        a++;
    }
    
    return sum;
}

int even_sum(int n){
    int sum = 0, a = 0;
    while(a<=n){
        sum += a;
        a += 2;
    }

    return sum;
}

int main(){
    
    int n;
    cout<<"Enter your Number : ";
    cin>>n;


    cout<<"Sum of n numbers = "<<sum(n)<<endl;
    cout<<"Sum of n even numbers = "<<even_sum(n)<<endl;

    return 0;
}