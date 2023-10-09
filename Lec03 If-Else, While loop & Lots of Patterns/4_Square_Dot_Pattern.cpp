#include<iostream>
using namespace std;

void squareDotPattern(int n){
    int i = 1;
    //int j=1;
    while(i<=n){
        int j = 1;
        while(j<=n){
        cout<<"* ";
        j++;}
        cout<<endl;
        i++;
    }
}


int main(){
    
    int n;
    cout<<"Enter your Number : ";
    cin>>n;

    squareDotPattern(n);

    return 0;
}