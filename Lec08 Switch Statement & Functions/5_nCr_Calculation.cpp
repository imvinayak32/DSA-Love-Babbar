#include<iostream>
using namespace std;

int factorial(int num){
    int ans = 1;
    for(int i =1; i<=num; i++){
        ans = ans * i;
    }
    return ans;
}

void nCr(){
    int n, r;
    cout<<"Enter n and r for nCr = ";
    cin>>n>>r;

    int ans = factorial(n)/(factorial(r)*factorial(n-r));

    cout<<"nCr of "<<n<<" with "<<r<<" is "<<ans<<endl;
}

int main(){

    nCr();

    return 0;
}