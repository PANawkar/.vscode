#include<iostream>
using namespace std;
bool LinearSearch(int arr[], int size, int key){

    //base case
    if(size==0){
        return false;
    }
    if(arr[0]==key){
        return true;
    }

    else{
        bool remainingpart=LinearSearch(arr+1, size-1, key);
        return remainingpart;
    }
}
int main()
{
    int arr[5]={2,3,44,55,123};
    int key=22;
    bool ans= LinearSearch(arr, 5,22);
    if(ans){
        cout<<"Key is Present"<<endl;

    }
    else{
        cout<<"Key is Absent"<<endl;
    }
}