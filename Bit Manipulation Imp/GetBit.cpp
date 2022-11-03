       //n=0101 ie 5 
//pos of n=3210
//for particular position i=2
//1<<i=0100
//0101 & 0100 = 0100
//if n & (1<<i)!=0, then bit is 1.


#include<iostream>
using namespace std;

int getBit(int n, int pos){
    return((n & (1<<pos))!=0);
}

int main(){
    cout<<getBit(5,2)<<endl;
    return 0;
}