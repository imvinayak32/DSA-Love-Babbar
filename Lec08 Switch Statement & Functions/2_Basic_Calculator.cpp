#include<iostream>
using namespace std;

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

int main(){

    calculator();


    return 0;
}