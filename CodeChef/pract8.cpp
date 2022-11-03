#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int v, u, a, s;
        cin>>v>>u>>a>>s;
        if(v*v<=u*u+2*a*s){
            cout<<"Yes"<<endl;
        }
        else
        cout<<"No"<<endl;
    }
    return 0;
}