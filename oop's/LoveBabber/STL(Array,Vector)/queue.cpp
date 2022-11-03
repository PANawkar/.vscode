#include<iostream>
#include<queue>
using namespace std;
int main(){

    queue<string>q;
    q.push("Pratik");
    q.push("NAwkar");

    cout<<"SIze before pop "<<q.size()<<endl;

    cout<<"FIrst Element "<<q.front()<<endl;
    q.pop();
    cout<<"First ELement "<<q.front()<<endl;

    cout<<"SIze after pop "<<q.size()<<endl;
}