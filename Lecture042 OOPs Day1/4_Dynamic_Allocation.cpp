#include<bits/stdc++.h>
using namespace std;

class Hero{

    //Properties
    int health;
    char level;

    public:
    string name;

    int getHealth(){
        return health;
    }
    char getLevel(){
        return level;
    }

    void setHealth(int h){
        health = h;
    }
    void setLevel(char ch){
        level = ch;
    }    
};

int main(){

    // Statically creating object
    Hero first;

    // Dynamically creating object
    Hero *h = new Hero;


    first.setHealth(100);
    first.setLevel('A');
    first.name = "Ramesh";

    h->setHealth(200);
    h->setLevel('M');
    h->name = "Vinayak";


    //Accessing Static Object
    cout<<"name = "<<first.name<<endl;
    cout<<"health = "<<first.getHealth()<<endl;
    cout<<"Level = "<<first.getLevel()<<endl;

    // Accessing Dynamic Object
    cout<<"name = "<<(*h).name<<endl;
    cout<<"health = "<<(*h).getHealth()<<endl;
    cout<<"Level = "<<(*h).getLevel()<<endl;

    // Better way of accessing
    cout<<"name = "<<h->name<<endl;
    cout<<"health = "<<h->getHealth()<<endl;
    cout<<"Level = "<<h->getLevel()<<endl;




    return 0;
}