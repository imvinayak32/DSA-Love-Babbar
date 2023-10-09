// 1. By default, data member & functions are private
#include<bits/stdc++.h>
using namespace std;

class Hero{

    //Properties
    public:
    string name;
    int health;
    char level;
};

int main(){

    int a; // creating a instance of integer as 'a'

    Hero first; // creating a instance of class 'Hero' as 'Ramu'
    // Also, called as object of class Hero

    cout<<"Size of first = "<<sizeof(first)<<endl;

    //Accessing the data members
    first.name = "Ramesh";
    first.health = 90;
    first.level = 'A';


    return 0;
}