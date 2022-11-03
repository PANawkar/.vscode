#include<iostream>
#include<stack>

using namespace std;
int main(){
    stack<string>s;

    s.push("Pratik");
    s.push("Nawkar");

    cout<<"Enter top element "<<s.top()<<endl;
    cout<<"size of stack "<<s.size()<<endl;

    cout<<"empty or not "<<s.empty()<<endl;




}