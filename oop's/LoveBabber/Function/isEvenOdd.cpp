#include<iostream>
using namespace std;
bool isEven(int a){
    if(a&1){
        //odd
        return 0;
    }
    else{
        //even
        return 1;
    }

}
int main()
{
    int num1;
    cin>>num1;
    isEven(num1);
    cout<<"The "<<num1<<" is "<<isEven(num1)<<endl;
    return 0;
}