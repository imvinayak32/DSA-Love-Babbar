#include<bits/stdc++.h>
using namespace std;

class Hero{

    public:
    int health;
    char level;
    string name;

    Hero(){
        cout<<"Yeh default wala constructor hai by hero2 "<<endl;
    }

    Hero(int health, char level, string name){
        this -> health = health;
        this -> level = level;
        this -> name = name;
    }

    void print(){
        cout<<"Name = "<<this->name<<endl;
        cout<<"Health = "<<this->health<<endl;
        cout<<"Level = "<<this->level<<endl<<endl;
    }

    ~Hero(){
        cout<<"Destructor ko bula liya hai humne"<<endl;
    }
};

int main(){

    Hero hero1(50,'C',"Babbar");
    hero1.print();

    Hero *hero2 = new Hero;

    cout<<"Iske baad return 0 statement hai..."<<endl;

    // Destructor called once only for static object, not for dynamically allocated object.

    // For this, we have to use 
    delete hero2;

    return 0;
}