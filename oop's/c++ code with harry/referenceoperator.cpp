//********Typecasting *********8

#include<iostream>
using namespace std;
int main()
{
    int a= 45;
    float b=45.96;
    cout<<"the sum of a and b is" <<a+b<<endl;
    cout<<"the value of sum is "<<a+int(b)<<endl;

    cout<<" the value of a and b is "<<a+(int)b<<endl;

    return 0;
}