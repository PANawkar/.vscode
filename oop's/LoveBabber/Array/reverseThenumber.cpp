#include<iostream>
using namespace std;

void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void reverse(int arr[], int n){
    int start=0;
    int end=n-1;


    while(start<=end){
        swap(arr[start], arr[end]);
    start++; end--;
    }
}


int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int brr[5]={1,2,3,4,5};
    reverse(arr, 10);
    reverse(brr, 5);

    printArray(arr, 10);
    printArray(brr ,5);
}