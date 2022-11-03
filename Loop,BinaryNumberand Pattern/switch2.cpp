#include <iostream>
using namespace std;
int main(){
    int a,b;
    cout <<"Input 2 numbers: ";
    cin>>a>>b;
    char op;
    cout<<"input an operator";
    cin>>op;

    switch (op)
    {
    case '+':
        cout<<a+b<<endl;
        break;
    case '-':
        cout<<a-b<<endl;
        break;
    case '*':
        cout<<a*b<<endl;
        break;
    case '%':
        cout<<a%b<<endl;
        break;
    default:
    cout<<"Enter another Operator"<<endl;
        break;
    }
}