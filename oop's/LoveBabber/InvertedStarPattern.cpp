// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int i=1;
//     while(i<=n){
//         int space=i-1;
//         while(space){
//             cout<<" ";
//             space--;
//         }
    
//         int j=1;
//         while(j<=i){
//             cout<<"*";
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// }

#include<iostream>
using namespace std;
 int remainingPart(int arr[], int n){
    if(n==0){
        return 0;

    }
    if(n==1){
        return arr[0];
    }

    int Part = remainingPart(arr+1, n-1);
    int sum= arr[0]+Part;
    return sum;
 }
int main(){
int arr[5]={4,32,3,5,4};
cout<<remainingPart(arr,5)<<endl;
return 0;
}
