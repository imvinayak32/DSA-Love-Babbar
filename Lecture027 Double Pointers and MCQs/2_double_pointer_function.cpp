#include<bits/stdc++.h>
using namespace std;

void update(int **p){
    p = p + 1;
    // kuch chnage hua - No

    *p = *p + 1;
    // kuch chnage hua - only ptr me change hua

    **p = **p + 1;
    // kuch chnage hua - only num me change hua
}

int main(){

    int num = 32;
    int *ptr = &num;
    int **ptr2 = &ptr;

    cout<<"Before update - "<<endl;
    cout<<" num = "<<num<<endl;
    cout<<" ptr = "<<ptr<<endl;
    cout<<" ptr2 = "<<ptr2<<endl<<endl;

    update(ptr2);

    cout<<"After update - "<<endl;
    cout<<" num = "<<num<<endl;
    cout<<" ptr = "<<ptr<<endl;
    cout<<" ptr2 = "<<ptr2<<endl<<endl;


    
    return 0;
}