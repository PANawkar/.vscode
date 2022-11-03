#include <iostream>
using namespace std;
class B;
class A
{
    int val1;

public:
    void setvalue(int a)
    {
         val1 = a;
    }
    void display(void){
        cout<< val1 <<endl;
    }
    friend void exchange(A & , B &);
};

class B
{
    int val2;

public:
    void setvalue(int b)
    {
         val2 = b;
    }

    void display(void){
        cout<< val2 <<endl;
    }
    friend void exchange(A & , B &);
};

void exchange(A &x , B &y){
    int temp= x.val1;
    x.val1 =y.val2;
    y.val2 =temp;

}
int main()
{
A oc1;
B oc2;

oc1.setvalue(34);
oc2.setvalue(77);
exchange(oc1, oc2);


cout<<"The value of c1 after exchange is ";
oc1.display();
cout<<"The value of c2 after exchange is ";
oc2.display();
    return 0;
}

