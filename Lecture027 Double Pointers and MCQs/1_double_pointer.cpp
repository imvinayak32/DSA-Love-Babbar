/*
    1.  Why ?
     cout<<" Value of ptr2 via num = "<<&(&num)<<endl;
*/
#include<bits/stdc++.h>
using namespace std;

int main(){

    int num = 32;
    int *ptr = &num;
    int **ptr2 = &ptr;

    // Observe what's value is equal
    cout<<" num = "<<num<<endl;
    cout<<" &num = "<<&num<<endl;
    cout<<" ptr = "<<ptr<<endl;
    cout<<" &ptr = "<<&ptr<<endl;
    cout<<" ptr2 = "<<ptr2<<endl;
    cout<<" &ptr2 = "<<&ptr2<<endl<<endl;

    // Accessing the num 
    cout<<" Value of num via num = "<<num<<endl;
    cout<<" Value of num via ptr = "<<*ptr<<endl;
    cout<<" Value of num via ptr2 = "<<**ptr2<<endl<<endl;

    // Accessing the ptr 
    cout<<" Value of ptr via num = "<<&num<<endl;
    cout<<" Value of ptr via ptr = "<<ptr<<endl;
    cout<<" Value of ptr via ptr2 = "<<*ptr2<<endl<<endl;

    // Accessing the ptr2
    cout<<" Value of ptr2 via ptr = "<<ptr<<endl;
    cout<<" Value of ptr2 via ptr2 = "<<*ptr2<<endl<<endl;
    
    return 0;
}