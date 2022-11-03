#include<iostream>
using namespace std;
int main()
 
{
    cout<<"Enter the number which table you want to print"<<endl;
    int n;
    cin>>n;
    for(int i =1;i<=10;i++){

        cout<<i*n<<endl;

    }
    return 0;
}