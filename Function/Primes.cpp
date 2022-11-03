///In function First we write the function outside the main file 
///then main file call the function 

#include<iostream>
#include<math.h>
bool isPrime(int num){
    for(int  i=2;i<=sqrt(num);i++){
        if(num%i==0){
            return false;
        }
    }
    return true;
}
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    for(int i=a;i<=b;i++){
        if(isPrime(i)){
            cout<<i<<endl;
        }
    }
    return 0;
}