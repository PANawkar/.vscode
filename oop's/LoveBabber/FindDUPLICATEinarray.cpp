#include<iostream>
using namespace std;
int main()
{
    int count=0;
    int n;
    cin>>n;
    int arr[n];
    int ans =0;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    
    for(int i=1; i<n; i++){
        ans= ans^i;
    }
    return ans;
}