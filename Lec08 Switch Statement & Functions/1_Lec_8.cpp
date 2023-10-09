// Home-Work
// Switch inside a infinte loop, how to get out of this loop via only switch ?
// Use of exit();

#include<iostream>
using namespace std;

void workingWithSwitch(){
    int num;
    cout<<"enter your number : ";
    cin>>num;

    switch (num) //this is expression, gives integral or character value !!
    {
    case 1:  // here in case conditon, float or strings aren't allowed
        cout<<"first";
        break; //not mandatory
        // if not written then, execute all the instructions below it.

    case 2: 
        cout<<"first";
        break;
    
    default: //Not mandatory to use, if any condition doesn't met then it.
        cout<<"this is default case";
        break;
    }
}

void calculator(){

    int a, b; char operation;

    cout<<"Enter two number : ";
    cin>>a>>b;
    cout<<"Which operation you want + - * / : ";
    cin>>operation;

    switch (operation)
    {
    case '+':
        cout<<"Additon of "<<a<<" "<<b<<" is "<<a+b<<endl;
        break;

    case '-':
        cout<<"Subtraction of "<<a<<" "<<b<<" is "<<a-b<<endl;
        break;

    case '*':
        cout<<"Multiplication of "<<a<<" "<<b<<" is "<<float(a*b)<<endl;
        break;

    case '/':
        cout<<"Division of "<<a<<" "<<b<<" is "<<float(a)/b<<endl;
        break;
    
    default:
    cout<<"Wrong operation !!"<<endl;
        break;
    }
}

void power(){
    int a, b, ans = 1;
    cout<<"Enter your number = ";
    cin>>a>>b;

    for(int i = 1; i<=b; i++){
        ans = ans*a;
    }
    cout<<a<<" to the power "<<b<<" is "<<ans<<endl;
}

bool isEven(){
    int a;
    cout<<"Enter your number = ";
    cin>>a;

    if(a&1) return 0;
    return 1;
}

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

//Questions  - 
void ap(){
    int n; 
    cout<<"Which term you want : ";
    cin>>n;

    int nth = (3*n + 7);
    cout<<"The "<<n<<"th term is "<<nth<<endl;
}

void countBits(){
    int count, a, b;
    cout<<"Enter two numbers : ";
    cin>>a>>b;

    while(a || b){
        if(a&1) count++;
        a = a>>1;

        if(b&1) count++;
        b = b>>1;
    }
    cout<<"Number of 1 bits = "<<count<<endl;
}


int main(){

    // workingWithSwitch();

    // calculator();
    
    //power();
    
    // if(isEven()) cout<<"Even"<<endl;
    // else cout<<"Odd"<<endl;

    //nCr();

    //ap();

    //countBits();


    return 0;
}