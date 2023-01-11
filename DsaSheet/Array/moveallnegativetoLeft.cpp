#include<iostream>
using namespace std;
 
int main(){
    int arr[9]={ -12, 11, -13, -5, 6, -7, 5, -3, -6};
    int i=-1;
    int pivot=0;
    for(int j=0; j<9; j++){
        if(arr[j]<pivot){
            i++;
            swap(arr[j], arr[i]);
        }
    }
    for(int i=0; i<9; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
return 0;
}
