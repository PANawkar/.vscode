#include<iostream>
using namespace std;
int BinarySearch(int arr[], int n, int key){
    int start=0; int end=n;
    int mid= (start+end)/2;
    while(start<=end){
    if(arr[mid]==key){
        return mid;

    }
    else if(arr[mid]>key){
        return end = mid-1;
    }
    else {
        return start= mid+1;
    }
    // mid= (start+end)/2;
}
return -1;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int key;
    
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cin>>key;
    cout<<BinarySearch(arr, n, key)<<endl;

}