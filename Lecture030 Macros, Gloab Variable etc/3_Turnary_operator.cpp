#include<bits/stdc++.h>
using namespace std;

void basicWay(int a, int b){
    int ans;
    
    if(a > b){
        ans = a;
        cout<<"Answer = "<<ans<<endl;
    }
    else{
        ans = b;
        cout<<"Answer = "<<ans<<endl;
    }
}

void turnaryOperator(int a, int b){
    int ans;

    ans = (a>b) ? a : b;  // syntax -> condition_ ? true_value : false_value;

    cout<<"Answer = "<<ans<<endl;
}

int main(){

    int a = 10;
    int b = 5;

    basicWay(a,b);
    turnaryOperator(a,b);


    return 0;
}