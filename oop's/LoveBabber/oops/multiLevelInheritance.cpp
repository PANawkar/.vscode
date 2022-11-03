#include<iostream>
using namespace std;

class Animal{
public:
int age ;
int weight;

public:
void speak(){
    cout<<"Speaking "<<endl;
}
} ;

class Dog: public Animal{

};

class cat: public Dog{

};
int main(){
Dog d;
d.speak();
cat c;
c.speak();
return 0;
}
