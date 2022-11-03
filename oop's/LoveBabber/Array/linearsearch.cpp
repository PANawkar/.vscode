#include<iostream>
using namespace std;
bool search(int arr[], int size, int key){
    for(int i=0; i<size; i++){
        if(arr[i]==key){
            return 1;
        }
    }
    return 0;
}
int main()
{
    int arr[10]={2,3, 3 ,5, 6,7 ,52, 44,56,100};
    cout<<"Enter the key"<<endl;
    int key;
    cin>>key;
    bool found= search(arr, 10, key);
    if(found){
        cout<<"Key is present"<<endl;
    }
    else{
        cout<<"Key is absent"<<endl;
    }
return 0;
}