#include<iostream>
using namespace std;
int factorial(int n){
    int fac=1;
    if(n==0 || n==1)
        return fac;
    for(int i=1;i<=n;i++)
        fac=fac*i;
    return fac;
}
int main()
{
    int a;
    cin>>a;
    cout<<factorial(a)<<"\n";
    return 0;
}