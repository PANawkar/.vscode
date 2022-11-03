#include<iostream>
using namespace std;

int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    cout<<arr[10];
    if((arr[10]%2)==0){
        cout<<"Number is even ";
    }
    else {
        cout<<"Number is odd";
    }
    return 0;
    
}