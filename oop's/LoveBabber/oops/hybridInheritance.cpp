#include<iostream>
using namespace std;
 class A{
    public:
    void speak(){
        cout<<"speaking"<<endl;
    }
 };
 class B{
    public:
    void talk(){
        cout<<"talking "<<endl;
    }
 };

 class C : public A, public B{

 }; 
 class D: public B{

 };
int main(){
C c1;
c1.speak();
c1.talk();

D d1;
d1.talk();
return 0;
}
