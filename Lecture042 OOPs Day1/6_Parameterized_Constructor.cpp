#include<bits/stdc++.h>
using namespace std;

class Hero{

    public:
    int health; 
    char level;

    Hero(){
        cout<<"Yeh default constructor hai "<<endl;
    }

    Hero(int health, char level){

        this -> health = health;
        this -> level = level;

        cout<<"this = "<<this<<endl;
        // 'this' is the pointer to current object
    }
};

int main(){

    Hero ramesh(100,'A');
    
    cout<<"Address of ramesh = "<<&ramesh<<endl;
    cout<<"Health of Ramesh = "<<ramesh.health<<endl;
    cout<<"Level of Ramesh = "<<ramesh.level<<endl;

    

    return 0;
}