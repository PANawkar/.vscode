#include<iostream>
using namespace std;

int firstOcc(int arr[],int n, int key){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(arr[mid]==key){
            ans=mid;
            e=mid-1;
        }
        else if(arr[mid]<key){
            e=mid-1;
        }
        else if(arr[mid]>key){
            s=mid+1;
        }
        mid=s+(e-s)/2;

    }return ans;
}
int main(){
    int n;
    cin>>n;
    int key;
    cin>>key;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    firstOcc(arr, n,key );
    cout<<firstOcc(arr, n, key)<<endl;
}