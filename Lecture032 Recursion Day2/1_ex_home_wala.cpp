// How to print in reverse pattern

#include<bits/stdc++.h>
using namespace std;

void reachHome(int src, int des){

    if(src == des){
        cout<<"Ghar agiya hu mai! "<<endl;
        return ;
    }
    else{
        cout<<"Abhi yaha hu : "<<src<<" "<<endl;
    }

    src++;

    reachHome(src,des);
}

int main(){

    int des = 10;
    int start = 1;

    reachHome(start, des);


    return 0;
}