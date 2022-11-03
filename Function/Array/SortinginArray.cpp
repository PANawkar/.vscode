
//here we use selection sort
// 4 5 8 2 1
//first we fix the first position and check whether in array small number than first then we arrange in 
//ascending order 
//1 5 8 2 4
//1 2 5 8 4
//1 2 4 5 8



#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                int temp=arr[j];
            
            arr[j]=arr[i];
            arr[i]=temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
        cout<<endl;
    
    }
    return 0;
}