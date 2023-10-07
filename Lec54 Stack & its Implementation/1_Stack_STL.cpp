#include<bits/stdc++.h>
using namespace std;

int main(){
    
    // Creation using STL
    stack <int> s;

    // Pushing elements
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    // Popping elements
    s.pop();
    s.pop();

    cout<<"Top of stack = "<<s.top()<<endl;

    if(s.empty())
        cout<<"Stack is empty"<<endl;
    else
        cout<<"Stack is not empty"<<endl;

    cout<<"Size of Stack = "<<s.size()<<endl;

    return 0;
}