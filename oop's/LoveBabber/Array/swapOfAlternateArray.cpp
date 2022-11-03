#include<iostream>
using namespace std;
int printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
        
    }
    cout<<endl;
}
int swapAlt(int arr[], int size){
    for(int i=0; i<size; i+=2){
        if(i+1<size){
            swap(arr[i], arr[i+1]);
        }
        
    }
}
int main()
{
    int even[8]={5,4,3,2,1,7,8,9};
    int odd[5]={2,3,4,56,7};
    
    swapAlt(even,8);
    printArray(even, 8);
    swapAlt(odd, 5);
    printArray(odd, 5);
    // cout<<"Swap of alternate number in array is "<<printArray(even, 8)<<endl;
    // cout<<"Swap of alternate number in array is "<<printArray(odd, 5)<<endl;
    return 0;
}