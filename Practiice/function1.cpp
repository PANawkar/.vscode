#include<iostream>
using namespace std;
void vote(int a)
{
    if(a>=18){
        cout<<"Eligible for vote\n";
    }
    else{
        cout<<"Not eligible\n";
    }
        
    
    
}
int main()
{
    int n;
    cin>>n;
    vote(n);
    cout<<endl;
    return 0;
}