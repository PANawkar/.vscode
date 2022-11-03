#include<iostream>
using namespace std;
void printArr(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void swapAlt(int arr[], int  size){
    for(int i=0; i<size; i+=2){
        if(i+1<size){
        swap(arr[i], arr[i+1]);
    }}
}
int main()

{
    int even[8]={2,12,32,4,576,76,56,55};
    int odd[5]={6,5,33,66,99};
    swapAlt(even, 8);
    swapAlt(odd, 5);
    printArr(even, 8);
    printArr(odd,5);
    
}