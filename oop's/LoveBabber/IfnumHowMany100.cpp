#include<iostream>
using namespace std;
int main()
{
    // int n=1330;
    int n;
    cin>>n;
    int num;
    cin>>num;
    int p,q,r;
    switch (num) {
        case (100):{
             p=n/100;
             n=n%100;
            cout<<p<<endl;
            
        }
        case(20):{
             q=n/20;
             n=n%20;
            cout<<q<<endl;
        }
        case (1):{
             r=n/1;
             n=n%1;
            cout<<r<<endl;
        }

    }
    // cout<<p+q+r<<endl;
}