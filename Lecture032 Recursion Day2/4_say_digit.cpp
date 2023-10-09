// Head Recursion & Tail Recursion showing different ways of printing !!

#include<bits/stdc++.h>
using namespace std;

// Iterative Solution ->
void sayDigitIteration(int n, string arr[]){

    while(n){
        string digit = arr[n%10];
        n = n/10;
        cout<<digit<<endl;
    }
}

// Recurssive Solution ->
void sayDigitRecursion(int n, string arr[]){

    //Base Case
    if( n == 0 ) return ;

    //Processing
    int digit = n%10;
    n = n/10;
    
    //Recursive Relation
    sayDigitRecursion(n,arr);

    cout << arr[digit] <<" ";
}

int main(){

    string arr[10] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};

    int number;
    cout<<"Enter any number = ";
    cin>>number;

    sayDigitRecursion(number, arr);
    cout<<endl;


    return 0;
}