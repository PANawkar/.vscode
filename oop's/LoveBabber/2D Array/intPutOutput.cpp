#include<iostream>
using namespace std;

bool isPresent(int arr[][4], int i, int j , int target){
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            if(arr[i][j]==target){
                return 1;
            }
            
        }
    }
    return 0;
}

void printRowSum(int arr[][4], int i, int j){
    
    for(int row=0; row<3; row++){
        int sum=0;
        for(int col=0; col<4; col++){
            sum+=arr[row][col];
            
        }
        cout<<sum<<" ";
        
         
    }cout<<endl;
   
    
}

int largestSum(int arr[][4], int row, int col){
    int maxi=INT32_MIN;
    int rowIndex=-1;
    for(int row=0; row<3; row++){
        int sum=0;
        for(int col=0; col<4; col++){
            sum+=arr[row][col];
            
        }
        if(sum>maxi){
            maxi=sum;
            rowIndex=row;
        }
       
        
         
    }cout<<"THe maximum sum is "<<maxi<<endl;
    return rowIndex;

}
int main(){
    int arr[3][4];
    
    
    //ROw WIse input
    for(int row=0; row<3; row++){
        for(int col=0; col<4; col++){
            cin>>arr[row]  [col];
            
        }
    }

    //Coloumn wise input
    // for(int col=0; col<4; col++){
    //     for(int row=0; row<3; row++){
    //         cin>>arr[row] [col];
            
    //     }
    // }


    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cout<<arr[i][j]<<" ";
            
        }cout<<endl;
    }
    // cout<<"Enter the element you want to find "<<endl;
    // int target;
    // cin>>target;
    // if(isPresent(arr,3,4,target)){
    //     cout<<"Element is found "<<endl;
    // }
    // else{
    //     cout<<"Element not found "<<endl;
    // }

    // printRowSum(arr, 3, 4);

    int num= largestSum(arr, 3, 4);
    cout<<num<<endl;

    

}