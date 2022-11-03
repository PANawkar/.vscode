#include<iostream>
using namespace std;

int getPivot(int arr[], int n){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<e){
        if(arr[mid>=arr[0]]){
            s= mid+1;
        }
        else{
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return e;//return s
}

int BinarySearch(int arr[], int s, int e, int key){
    int start=s;
    int end=e;
    int mid= start+(end-start)/2;
    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        else if(key>arr[mid]){
            start= mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return s;
}
int main(){
    int arr[5]={3, 8, 13,17, 1};
    cout<<"Pivot is "<<getPivot(arr, 5)<<endl;
    
    
    
}


