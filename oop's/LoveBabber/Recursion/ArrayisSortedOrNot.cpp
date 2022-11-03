#include<iostream>
using namespace std;

bool isSorted(int arr[], int size){
    if(size==0|| size==1){
        return 1;

    }
    if(arr[0]>arr[1]){
        return 0;
    }
    else{
        bool ans=isSorted(arr+1,size-1);
    }
}

void print(bool temp){
    if(temp==1){
        cout<<"Array is sorted"<<endl;
    }
    else{
        cout<<"Array is not sorted"<<endl;
    }
}
int main()
{
    int arr[6]={2,3,6,88,1200,130};
    cout<<isSorted(arr, 6)<<endl;
    bool temp = isSorted(arr, 6);

    print(temp);

}