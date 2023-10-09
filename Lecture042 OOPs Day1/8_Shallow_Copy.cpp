#include<bits/stdc++.h>
using namespace std;

class Hero{

    public:
    int health;
    char level;
    char *name;

    Hero(){
        cout<<"Default Constructor"<<endl;
        name = new char[100]; // dynamically
    }

    Hero(int health, char level, char name[]){
        this -> health = health;
        this -> level = level;
        this -> name = name;
    }

    // Copy Constructor
    // Hero(Hero& temp){
    //     this->name = temp.name;
    //     this->health = temp.health;
    //     this->level = temp.level;
    // }

    void print(){
        cout<<"Name = "<<this->name<<endl;
        cout<<"Health = "<<this->health<<endl;
        cout<<"Level = "<<this->level<<endl<<endl;
    }
};

int main(){

    char name[100] = "Babbar";

    Hero hero1(50,'C', name);
    hero1.print();

    Hero hero2(hero1);
    hero2.print();

    hero1.name[0] = 'G';
    hero1.print();

    hero2.print();
    // Will print Gabbar but we don't changed it ???
    // Because of 'Shallow Copy'


    return 0;
}