/*  1. Look for printnig prime once
        - for this use return statement multiple times.
    2. Check error when not returning anything from sum function
*/
#include<iostream>
using namespace std;

void which_case(int n){
    if(n>='A' && n<='Z') cout<<"This is Uppercase"<<endl;

    else if(n>='a' && n<='z') cout<<"This is Lowercase"<<endl;

    else cout<<"This is numeric"<<endl;
}

void print(int n){
    int a = 1;
    while(a<=n){
        cout<<a<<" ";
        a++;
    }
    cout<<endl<<"Number has been printed till "<<n<<endl;
}

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
        sum = sum + a;
        a+=2;
    }
    return sum;
}

int prime(int n){
    int i = 2;
    
    while(i<n){
        if(n%i == 0){
            cout<<"Non-Prime Number"<<endl;
            return 0;
        }
        i++;
    }
    cout<<"Prime Number"<<endl;
    return 0;
}

void pattern1(int n){
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

void pattern2(int n){
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
    //char n;
    cout<<"Enter your Character/Number : ";
    cin>>n;

    //which_case(n);
    //print(n);
    //cout<<"Sum of n numbers = "<<sum(n)<<endl;
    //cout<<"Sum of n even numbers = "<<even_sum(n)<<endl;
    //prime(n);
    pattern1(n);
    cout<<endl;
    pattern2(n);

    return 0;
}