//Polymorphism have main two type 
//1) Compile time 
//2) Run time

//Compile time 
//a) FUnction Overloading 
//b) OPerator Overloading 


//Run time
// Virtual functions


//Function Overloading 

#include<iostream>
using namespace std;

class ApnaCollage{
    public:
    void func(){
        cout<<" Function with no argument"<<endl;
    }
    void func(int x){
        cout<<"Function with int argument "<<endl;
    }
    void func(double x){
        cout<<"Function with double argument"<<endl;
    }
    
};

int main(){
    ApnaCollage obj;
    obj.func();
    obj.func(5);
    obj.func(6.3);
    return 0;
}



//Operator overloading 

#include "bits/stdc++.h"
using namespace std;

class Complex
{
private:
    int real, imag;
    public:
    Complex(int r=0,int i=0){
        real=r;
        imag=i;
    }
    Complex operator + (Complex const &obj){
        Complex res;
        res.imag=imag +obj.imag;
        res.real= real + obj.real;
        return res;
    }

    void display(){
        cout<< real <<" +i"<<imag<<endl;
    }
};

int32_t main(){
    Complex c1(12,7), c2(6,7);
    Complex c3=c1+c2;
    c3.display();
    return 0;
}


//Virual Function

#include "bits/stdc++.h"
using namespace std;

class base
{
    public:
    virtual void print(){
        cout<<"This is the base class print function"<<endl;
    }
    void display(){
        cout<<"This is the base class display function"<<endl;
    }
};

class derived: public base{
    public:
    void print(){
        cout<<"This is the derived class print function"<<endl;
    }
    void display(){
        cout<<"This is the derived class display function"<<endl;
    }
};
int32_t main(){
    base *baseptr;
    derived d;
    baseptr =&d;

    baseptr ->print();
    baseptr ->display();
    return 0;
}