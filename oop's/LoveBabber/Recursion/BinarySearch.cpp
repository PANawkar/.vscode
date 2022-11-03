#include<iostream>
using namespace std;
void print(int *arr, int start, int end){
    for(int i=start; i<=end; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

}
bool BinarySearch(int *arr, int start, int end,int key){
    cout<<endl;
    print(arr, start,end);
    int  mid= start+ (end-start)/2;
    //base case
    //element not found
    if(start>end){
        return false;
    }
        cout<<"Value of mid is "<<arr[mid]<<endl;
        cout<<endl;
    //element found
    if(arr[mid]==key){
        return true;

    }
    if(arr[mid]>key){
        return BinarySearch(arr,start,mid-1,key);
    }
    else{
        return BinarySearch(arr, mid+1, end, key);
    }
    
    
}
int main()
{
    int arr[10]={2,4,6,8,12,15,22,31,38,45};
    // int start=0;
    // int end=5;
    // int key=122;

    cout<<"Key is Present or not "<<BinarySearch(arr,0,9,122)<<endl;
}