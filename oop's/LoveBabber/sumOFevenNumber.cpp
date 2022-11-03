#include<iostream>
using namespace std;
int main()
{
    int n, max, sum=0;
    cin>>max;
    for(n =0; n<=max;n++){
        if(n%2==0){
            cout<<n<<endl;
            sum=sum+n;
        }
        
    }
    cout<<"The sum of even number "<<sum<<endl;
 return 0;
}