#include<iostream>
using namespace std;
int main()
{
    int t = 3;
    cin>>t;
    while(t--){
        int x,y,z;
        cin>>x>>y>>z;
       int c= abs(x-y);
       if(c<=z){
           cout<<"Yes"<<endl;
       }
       else{
           cout<<"No"<<endl;
       }

    }
    return 0;
}