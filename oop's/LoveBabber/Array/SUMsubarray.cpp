// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int arr[n];
//     int sum=0;
//     int j;
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//         }
//         for(int i=0; i<n; i++){
//         for(int j=i; j<n; j++){
            
//             sum+=arr[j];
//         }
//         }
//     cout<<arr[j]<<endl;
// }

#include<iostream>
using namespace std;
bool searchArr(int arr[], int size, int key){
for(int i=0; i<size; i++){
    if(arr[i]==key){
        return 1;

    }
    
}
return 0;
}
int main()
{
    int key;
    cout<<"Enter the key to serach "<<endl;
    cin>>key;
    int arr[5]={1,2,3,4,5};
    bool found= searchArr(arr, 5 , key);
    if(found){
        cout<<"Key is present"<<endl;
    }
    else{
        cout<<"Key is absent"<<endl;
    }
}