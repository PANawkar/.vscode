#include<iostream>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
    int k;
    cin>>k;

int arr[5]={2,31,33,44,5};
for(int i=0;i<5-1; i++){
    for(int j=i+1; j<5; j++){
        if(arr[j]<arr[i]){
            swap(arr[j], arr[i]);
        }
    }
}
    

    cout<<arr[k]<<endl;
    }

return 0;
}
