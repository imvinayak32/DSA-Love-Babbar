#include<bits/stdc++.h>
using namespace std;

class Hero{

    public:
    int health;
    char level;
    char *name;

    Hero(){
        cout<<" yeh default wala constructor hai "<<endl;
        name = new char[100]; // dynamically
    }

    Hero(int health, char level, char name[]){
        this -> health = health;
        this -> level = level;
        this -> name = name;
    }

    // Copy Constructor
    Hero(Hero& temp){

        char* ch = new char[strlen(temp.name + 1)];
        strcpy(ch, temp.name);
        this -> name = ch;

        cout<<"Copy Constructor is called !! "<<endl;
        this->health = temp.health;
        this->level = temp.level;
    }

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

    return 0;
}