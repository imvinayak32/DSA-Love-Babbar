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
        cout<<"Destructor agiya hai"<<endl;
    }

    static int randomFunc(){
        return timeToComplete;
    }
};

int Hero::timeToComplete = 10;

int main(){

    cout<<endl<<"Static Member = "<<Hero::timeToComplete<<endl<<endl;

    cout<<"Static Function = "<<Hero::randomFunc()<<endl<<endl;


    Hero hero1(50,'C',"Babbar");
    hero1.print();

    return 0;
}