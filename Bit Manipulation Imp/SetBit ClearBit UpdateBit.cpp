//n=0101
//Suppose we need to set bit at position, i=1
//i<<i=0010
//0101 | 0010 =m 0111

#include<iostream>
using namespace std;


int setBit(int n, int pos){
    return(n | (1<<pos));
}


//Clear Bit
//n=0101
// Suppose we need to clear bit at position i=2
//1<<i=0100
//~0100 = 1011
//0101 & 1011 = 0001
int clearBit(int n, int pos){
    int mask = ~(1<<pos);
    return (n & mask);
}


//Update bit
//Suppose we need to update bit at position, i=1 to 1 
// 1 <<i=0010
//~0010 = 1101
// 0101 & 1101 = 0101
// 1<< i = 0010
// 0101 | 0010 = 0111
int updateBit(int n, int pos, int value){
    int mask = ~ (1<<pos);
    n = n & mask;
    return (n | (value<<pos));
}
int main(){
    //cout<<setBit(5,1)<<endl;
    //cout<<clearBit(5,2)<<endl;
    cout<<updateBit(5,1,1)<<endl;
    return 0;
}