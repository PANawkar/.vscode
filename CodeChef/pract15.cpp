#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int mx=-1;
    int mn=9999999;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
        mx=max(mx, arr[i]);
        mn=min(mn,arr[i]);
    }
    cout<<"Maximum "<<mx<<" "<<"minimum "<<mn<<" "<<endl;
}