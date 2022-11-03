//max till i
#include<iostream>
using namespace std;

int  main(){
    int n;
    cin>>n;
    int arr[n];
    int mx=-199999999;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<n; i++){
        mx=max(mx,arr[i]);
        cout<<mx<<endl;
    }
    
    
}