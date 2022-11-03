#include<iostream>
using namespace std;
int main()
{
    int a=3;
    int*b = &a;
   // &(address operator)
   cout<<"The adress of  b with respect to a = "<<b<<endl;
   cout<<"The adress of  b with respect to a = "<<&a<<endl;


   //*(dereference operator)
   cout<<"The value of b with respect to a = "<<a<<endl;
   cout<<"THe  value of b with respect to a= "<<*b<<endl;
}