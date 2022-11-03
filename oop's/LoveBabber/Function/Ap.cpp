#include<iostream>
using namespace std;
int Ap(int n){
   int  ap=3*n+7;
   return ap;
}
int main()
{
int n;
cin>>n;
Ap( n);
cout<<"THe value of AP is "<<Ap(n)<<endl;
}