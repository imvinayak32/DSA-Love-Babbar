#include<bits/stdc++.h>
using namespace std;

class Hero{

    public:
    int health;
    char level;
    string name;

    Hero(){
        cout<<" yeh default wala constructor hai "<<endl;
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
        cout<<"Destructor ko bula hai "<<this->name<<endl;
    }
};

int main(){

    Hero hero1(50,'C',"Babbar");
    hero1.print();

    Hero hero2(100,'A',"Gabbar");
    hero2.print();

    Hero hero3(50,'C',"Jabbar");
    hero1.print();

    Hero hero4(100,'A',"Mabbar");
    hero2.print();

    Hero hero5(100,'A',"Tabbar");
    hero3.print();

    cout<<"Iske baad return 0 statement hai..."<<endl;
    // Printed two times, one for each Object.
    // For Static Objects, Destructors are callled automatically

    // Destructors are called in LIFO fashion

    return 0;
}