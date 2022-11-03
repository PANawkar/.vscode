#include<iostream>
using namespace std;
int main()
{
    char ch[6] = "abcde";
    //attention here
    cout<<ch<<endl;

    char *c=&ch[0];
    //return whole string 
    cout<<c<<endl;



}