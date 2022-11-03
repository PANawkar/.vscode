#include<iostream>
using namespace std;
int main()
{
    int i=5;
    int *p=&i;
    int **p2=&p;

    cout<<i<<endl;
    cout<<*p<<endl;
    cout<<**p2<<endl;

    //address of i, p,  *p
    cout<<&i<<endl;
    cout<<p<<endl;
    cout<<*p2<<endl;


    cout<<&p<<endl;
    cout<<p2<<endl;

    cout<<"Before "<<**p2<<endl;
    **p2=**p2+1;
    cout<<"After "<<**p2<<endl;
    

    cout<<"Before "<<*p<<endl;
    *p=*p+1;
    cout<<"After "<<*p<<endl;

   //update
    cout<<i<<endl;

}