#include<iostream>
using namespace std;
int main()
{
    int a[10]={23, 123, 41, 67};
    /*
    cout<<"THe address of  first block of array "<<arr<<endl;
    cout<<arr[0]<<endl;
    cout<<"The address of first block of array "<<&arr[0]<<endl;

    cout<<"4 -> "<<*arr<<endl;
    cout<<"5 -> "<<*arr+1<<endl;
    cout<<"6 -> "<<*(arr)+1<<endl;
    cout<<"7 -> "<<*(arr+1)<<endl;
    cout<<"8 -> "<<arr[2]<<endl;
    cout<<"9 -> "<<*arr+2<<endl;
    cout<<"10 -> "<<*(arr+2)<<endl;

    int i=3;
    cout<<i[arr]<<endl;
    */
   /* int temp[10];
   cout<<"size of Temp "<<sizeof(temp)<<endl;
   cout<<sizeof(*temp)<<endl;

   int *ptr= &temp[0];
   cout<<ptr<<endl;
   cout<<*ptr<<endl;
   cout<<"size of Ptr"<<endl;
   cout<<sizeof(ptr)<<endl;
   cout<<sizeof(*ptr)<<endl;
   cout<<sizeof(&ptr)<<endl;
   cout<<(&ptr)<<endl;
   */
  int arr[10]={1,2,3,5};
  cout<<&arr[0]<<endl;
  cout<<&arr<<endl;
  cout<<arr<<endl;
  
  int *p=&arr[0];
  cout<<&p[0]<<endl;
  cout<<&p<<endl;
  cout<<p<<endl;




}