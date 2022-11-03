#include <iostream>
using namespace std;
int main (){
    char button;
    cout<<"Input the character: ";
    cin>>button;
    switch (button)
    {
    case 'a':
       cout<<"Hello"<<endl;
        break;
    case 'b':
       cout<<"Jai Shree Ram"<<endl;
        break;
    case 'c':
       cout<<"Om Shanti"<<endl;
        break;
    default:
    cout<<"I am Still Learning more"<<endl;
        break;
    }return 0;

}