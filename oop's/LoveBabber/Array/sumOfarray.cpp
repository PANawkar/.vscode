#include<iostream>
using namespace std;
int sumArr(int arr[], int n){
    int sum=0;
    for(int i=0; i<n; i++){
        sum+=arr[i];
    }
    return sum;
}
int main()
{
    int size;
    cin>>size;
    int arr[100];
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    cout<<"The sum of an array is "<<sumArr(arr, size)<<endl;
}