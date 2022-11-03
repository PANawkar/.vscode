#include <iostream>
#include<ctype.h>
using namespace std;
int main()
{
    //     int a=9;
    //     if(a==9){
    //         cout<<"Nine"<<endl;
    //     }
    //     if(a>0){
    //         cout<<"Positive"<<endl;
    //     }
    //     else
    //     {
    //         cout<<"Negative"<<endl;
    //     }

    // int a = 2;
    // int b = a + 1;
    // if ((a = 3) == b)
    // {
    //     cout << a;
    // }
    // else
    // {
    //     cout << a + 1 << endl;
    // }
    // int a=24;
    // if(a>20){
    //     cout<<"Love"<<endl;
    // }
    // else if(a==24){
    //     cout<<"Lovely"<<endl;
    // }
    // else
    // {
    //     cout<<"Pratik"<<endl;
    // }
    // cout<<a<<endl;
    char ch;
    cout<<"Enter the charcter"<<endl;
    cin>>ch;
    if(ch>=97 && ch<=122){
        cout<<"THis is Lowercase"<<endl;
    }
    else if(ch>=65  && ch<=90){
        cout<<"This is Uppercase"<<endl;
    }
    else if (ch>=0  && ch<=9){
        cout<<"This is Number"<<endl;
    }
    else{
        cout<<"Enter the valid character"<<endl;
    }
    return 0;
}