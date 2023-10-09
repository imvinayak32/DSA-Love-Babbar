#include<bits/stdc++.h>
using namespace std;

class Hero{

    public:
    int health;
    char level;
    string name;

    // Default Constructor
    Hero(){
        cout<<"Default Constructor"<<endl;
    }

    // Parameterized Constructor
    Hero(int health, char level, string name){
        this -> health = health;
        this -> level = level;
        this -> name = name;
    }

    // Copy Constructor
    Hero(Hero& temp){
        this->name = temp.name;
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

    Hero suresh(50,'C',"Suresh"); // Using Parameterized Constructor, to set values
    suresh.print();

    Hero Raj(suresh); // Using Copy Constructor

    Raj.name = "Raj";
    Raj.print();




    return 0;
}