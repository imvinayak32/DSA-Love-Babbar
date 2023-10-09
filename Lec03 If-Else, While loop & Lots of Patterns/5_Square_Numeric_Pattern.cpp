#include<iostream>
using namespace std;

void squareNumericPattern(int n){
    int i = 1;
    //int j=1;
    while(i<=n){
        int j = 1;
        while(j<=n){
        cout<<i<<" ";
        j++;}
        cout<<endl;
        i++;
    }
}


int main(){
    
    int n;
    cout<<"Enter your Number : ";
    cin>>n;

    squareNumericPattern(n);

    return 0;
}