#include<iostream>
using namespace std;
class Hero{
public:
int health;
string level;
char *name;
int getHealth(){
    return health;
}
string  getLevel(){
    return level;
}
int setHealth(int h){
    health=h;
}
string setlevel(string l){
    level=l;
}

Hero(){
    cout<<"Simple constructor called"<<endl;
    name=new char[100];
}


//Copy constructor
Hero(Hero& temp){
    cout<<"Copy Constructor called "<<endl;
    this->health=temp.health;
    this->level=temp.level;
}
};
int main()
{
    Hero h1;
    h1.health=99;
    cout<<h1.health<<endl;
    cout<<"Health is "<<h1.getHealth()<<endl;
    Hero p;
    p.level="Pratik";
    cout<<p.level<<endl;
    cout<<"Level is "<<p.getLevel()<<endl;

    Hero *b=new Hero;
    b->setHealth(70);
    b->setlevel("BIG");
    cout<<"Level is "<<(*b).getLevel()<<endl;
    cout<<"Health is "<<(*b).getHealth()<<endl;
}
