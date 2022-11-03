//(n & n-1) has same bits as n except the rightmost set bit


#include<iostream>
using namespace std;

int numberofones(int n){
    int count =0;
    while(n){
        n= n &(n-1);
        count++;

    }
    return count;
}

int main(){
    cout<<numberofones(19)<<endl;
    return 0;
}