#include<iostream>
using namespace std;

int addToarr(int arr[], int n, int arr1[], int m){
    int sum;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            sum=i+j;
        }

    }
    // int carry=sum/10;
    // sum=sum%10;
    cout<<sum<<endl;
}
int main(){
    int arr2[5]={1, 2, 3, 4, 5};
    int arr3[3]={3,4,7};

    cout<<addToarr(arr2,5, arr3,3)<<endl;
}