#include<iostream>
using namespace std;


void ap(){
    int n; 
    cout<<"Which term you want : ";
    cin>>n;

    int nth = (3*n + 7);
    cout<<"The "<<n<<"th term is "<<nth<<endl;
}


int main(){

    ap();


    return 0;
}