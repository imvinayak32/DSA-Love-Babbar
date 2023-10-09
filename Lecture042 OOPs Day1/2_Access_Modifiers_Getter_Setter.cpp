// Getter - to fetch the private data member and functions
// Setter - to modify them, also we can password to set them 
#include<bits/stdc++.h>
using namespace std;

class Hero{

    //Properties
    int health;
    char level;

    public:
    string name;

    // Getter
    int getHealth(){
        return health;
    }
    char getLevel(){
        return level;
    }

    // Setter
    void setHealth(int h){
        health = h;
    }
    void setLevel(char ch){
        level = ch;
    }

    
};

int main(){

    Hero first;

    //Accessing the data members
    first.name = "Ramesh";
    cout<<"name = "<<first.name<<endl;
    
    // Can't access directly as they are private
    //first.health = 90;
    //first.level = 'A';

    first.setHealth(100);
    cout<<"health = "<<first.getHealth()<<endl;
    first.setLevel('A');
    cout<<"Level = "<<first.getLevel()<<endl;



    return 0;
}