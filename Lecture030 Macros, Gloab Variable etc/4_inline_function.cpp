/*
 Inline function - use when function body containing 1 line
                   for 2 - 3 lines, it depends on compiler
                   for more than 3 lines, don't use it.
   Basically,
        1. it reduces the function call overhead 
        2. increases the readability of code
   How implemented ?
    function call is replaced with function body before compilation
*/

#include<bits/stdc++.h>
using namespace std;

inline int getMax(int& a, int& b){ //extra memory is not used through reference variable
    return (a>b) ? a : b;
}

int main(){

    int a = 7;
    int b = 5;

    int ans = getMax(a,b);
    cout<<"Greater number = "<<ans<<endl;

    a = a + 2;
    b = b + 5;

    ans = getMax(a,b);
    cout<<"Greater number = "<<ans<<endl;


    return 0;
}