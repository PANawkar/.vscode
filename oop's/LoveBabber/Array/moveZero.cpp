#include<iostream>
using namespace std;
int moveZeroRight(int arr[],int n){
    int j=0;
    for(int i=0; i<n; i++){
        if(arr[i]!=0){
            swap(arr[i],arr[j]);
            j++;
            
        }
        else{
            continue;
        }
    }
}
void print(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    }
int main(){
    int arr1[6]{1,0,9,0,6,0};
    moveZeroRight(arr1,6);
    print(arr1, 6);
}