#include<iostream>
using namespace std;
int main()
{
    int num=5;
    cout<<num<<endl;

    int *ptr= &num;
    

    cout<<"THe value is "<<*ptr<<endl;

    cout<<"THe address is "<<ptr<<endl;

    double d= 4.5;
    double * p2=&d;

    cout<<"THe value of p2 "<<*p2<<endl;

    cout<<"The address of p2 "<<p2<<endl;


    cout<<"The size of num "<<sizeof(num)<<endl;
    // size of pointer
    cout<<"The size of pointer int is "<<sizeof(ptr)<<endl;
    cout<<"The size of pointer double is "<<sizeof(p2)<<endl;

    int *p=&num;
    cout<<"Before "<<num<<endl;
    (*p)++;
    cout<<"After "<<num<<endl;

    //copying a pointer

    int *q=p;
    cout<<p<<"="<<q<<endl;
    cout<<*p<<"="<<*q<<endl;

    //important concept

    int i=3;
    int *t=&i;
    *t=*t+1;
    cout<<*t<<endl;
    
    cout<<"Before t"<<t<<endl;
    t=t+1;
    cout<<"After t"<<t<<endl;
}