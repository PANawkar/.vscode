#include<iostream>
using namespace std;
void swap (int a, int b){
int temp = a;
a=b;
 b = temp;
}
 //call reference using pointer
 void swapPointer(int*a, int*b){
     int temp = *a;
     *a=*b;
     *b= temp;
 }

int main()
{
    // int x = 4, y =5;
    // cout<<"THe value of x is "<<x <<" and the value of y is "<<y<<endl;

    // swap(x,y);
    // cout<<"THe value of x is "<<x <<" and the value of y is "<<y<<endl;
    
     int x = 4, y =5;
    cout<<"THe value of x is "<<x <<" and the value of y is "<<y<<endl;

    swapPointer(&x,&y);
    cout<<"THe value of x is "<<x <<" and the value of y is "<<y<<endl;

return 0;
}