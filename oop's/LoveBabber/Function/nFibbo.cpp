#include<iostream>
using namespace std;
int  fibo(int n){
    int f[n];
    int i;
    int a=0;
    int b=1;

    for(int i=2; i<n; i++){
        int next=a+b;
        a=b;
        b=next;
    }
    return b;

}
int main()
{
int n;
cin>>n;
fibo(n);
cout<<"THe fibonacci series is  "<<fibo(n)<<endl;

}