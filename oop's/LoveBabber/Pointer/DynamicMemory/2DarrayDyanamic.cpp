#include<iostream>
using namespace std;
int main()
{
    int row;
    cin>>row;
    int**arr= new int*[row];
    int col;
    cin>>col;
    // int**arr= new int*[col];

    for(int i=0; i<row; i++){
        arr[i]=new int[col];
    }

    //taking input
    for(int i=0; i<row;i++){
        for(int j=0; j<col; j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    //taking output
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }
    return 0;
}