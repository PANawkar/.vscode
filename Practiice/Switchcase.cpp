#include<iostream>
using namespace std;
int main()
{
    int n1,n2;
    
    char pratik;
    cout<<"enter 2 numbers: ";
    cin>>n1>>n2;

    cout<<"Enter operand: ";
    cin>>pratik;

    switch(pratik)
    {case '+':
        cout<<n1+n2<<endl;
        break;
    case '-':
        cout<<n1-n2<<endl;
        break;
    case '*':
        cout<<n1*n2<<endl;
        break;
    case '/':
        cout<<n1/n2<<endl;
        break;
    default:
        cout<<"Operator not found"<<endl;
        break;
    }
    return 0;
}