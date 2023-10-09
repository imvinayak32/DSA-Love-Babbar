#include<bits/stdc++.h>
using namespace std;

class Hero{

    public:
    int health;
    char level;
    string name;
    static int timeToComplete;

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
        cout<<"Destructor ko bulaya "<<this->name<<endl;
    }
};

int Hero::timeToComplete = 10;
// Static Data Member, belongs to class instead of Object.

int main(){

    cout<<endl<<"Static Member = "<<Hero::timeToComplete<<endl<<endl;
    // we are accessing it without any object, directly through class itself

    Hero hero1(50,'C',"Babbar");
    
    hero1.timeToComplete = 20;
    
    hero1.print();

    cout<<"Static Member via hero1 = "<<hero1.timeToComplete<<endl<<endl;
    // Accessing Static member via objects is bad practice.


    return 0;
}