#include<iostream>
using namespace std;
 class Human{
    
    
    public:
    int age;
    int weight;
    string name;
    
    public:
    int getAge(){
        return this->age;
    }

    int setWeight(int w){
        return this->weight=w;
    }
 };

 class Male :public Human{
    private:
    int prj;
    public:
    string color;

    void sleep(){
        cout<<"Male is sleeping"<<endl;
    }
 };
int main(){

Male object1;
cout<<object1.age<<endl;
// cout<<object1.prj<<endl;             //Private class of Parent class can not be accessable in Child class 
cout<<object1.weight<<endl;
object1.sleep();
cout<<object1.setWeight(34)<<endl;
return 0;
}
