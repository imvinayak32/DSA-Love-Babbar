#include<bits/stdc++.h>
using namespace std;

// Pass by Copy 
void update(int n){
    // New copy of n is created here
    n++;
    cout<<"Value of n in update block "<<n<<endl;
}

// Pass by Refrence 
void update2(int &n){
    // A variable is different from n inside main.
    // But, it is also pointing to that n as well.
    n++;
    cout<<"Value of n in update block "<<n<<endl;
}

int main(){

    int n = 10;

    cout<<"Value of n = "<<n<<endl<<endl;
    
    update(n);
    cout<<"Updated value of n inside main  = "<<n<<endl;

    update2(n);
    cout<<"Updated value of n inside main = "<<n<<endl;


    return 0;
}