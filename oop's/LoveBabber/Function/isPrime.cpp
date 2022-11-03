#include<iostream>
using namespace std;
bool isPrime(int n){
    for(int i=2; i<n;i++){
        if(n%i==0){
            return 0; //not prime
        }
        
        
    }
return 1; //prime
}
int main()
{
    int n;
    cin>>n;
    isPrime( n);
    cout<<"The given number is prime or not "<<isPrime(n)<<endl;
    
}