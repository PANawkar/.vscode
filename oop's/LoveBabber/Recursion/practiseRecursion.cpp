// factorial 
// #include<iostream>
// using namespace std;
// int factorial(int n){
//     if(n==0){
//         return 1;
//     }
//     return n*factorial(n-1);
// }
// int main(){
// int n;
// cin>>n;

// cout<<"FactoriL is "<<factorial(n)<<endl;
// return 0;
// }

// print counting
// #include<iostream> 
// using namespace std;
//  int print(int n){
//     if(n==0){
//         return 0;
//     }
//     cout<<n<<" ";
//     return print(n-1);
//  }
// int main(){
// int n;
// cin>>n;
// cout<<print(n)<<endl;
// return 0;
// }

// fibbnacci number
// #include<iostream>
// using namespace std;
// int fib(int n){

//     if(n==1){
//         return 0;
//     }
//     if(n==2){
//         return 1;
//     }
    
//      int ans = fib(n-1)+fib(n-2);
    
//     return ans;
// }
// int main(){
// int n;
// cin>>n;
// cout<<"Fbbonacci is " <<fib( n)<<endl;
// return 0;
// }

// say digit
// #include<iostream>
// using namespace std;
// void saydigit(int n, string arr[]){
//     if(n==0){
//         return ;
//     }
//     int digit = n%10;
//     n= n/10;
    
//     saydigit(n, arr);
//     cout<<arr[digit]<<" ";

// }
// int main(){
// int n;
// cin>>n;
// string arr[10]= { " zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
// // cout<<endl;
// saydigit(n, arr);
// cout<<endl;
// return 0;
// }


// array is sorted or not
// #include<iostream>
// using namespace std;
// bool isSorted(int arr[], int size){
//     if(size ==0 || size ==1){
//         return false;

//     }
//     if(arr[0]>arr[1]){
//         return false;
//     }
//     else{
//         bool ans = isSorted(arr+1, size-1);
//         return ans;
//     }
// }
// int main(){
// int arr[6]={2,3,5,67,7,8};
// bool ans = isSorted(arr, 6);
// if(ans){
//     cout<<"array is sorted"<<endl;
// }
// else{
//     cout<<"array is not sorted"<<endl;
// }
// return 0;
// }


// sum of array
// #include<iostream>
// using namespace std;
// int getSum(int *arr, int size){
//     if(size==0){
//         return 0;
//     }
//     if(size==1){
//         return arr[0];
//     }

//     int remaining = getSum(arr+1, size-1);
//     int sum = arr[0]+remaining;
//     return sum;
// }
// int main(){
// int arr[6]= { 2,3,4,5,6,3};
// int sum = getSum(arr,6);
// cout<<sum<<endl;
// return 0;
// }

// linear search 
// #include<iostream>
// using namespace std;
// bool search(int arr[], int size, int key){
//     if(size==0){
//         return false;
//     }
//     if(arr[0]==key){
//         return true;
//     }
//     else{
//         bool remaining = search(arr+1, size-1, key);
//         return remaining;
//     }
// }
// int main(){
// int arr[6]={2,3,4,7,100,121};
// int key =67;
// bool ans = search(arr, 6, key);
// if(ans){
//     cout<<"element is found"<<endl;
// }
// else{
//     cout<<"element is not found "<<endl;
// }
// return 0;
// }

// binary search 
// #include<iostream>
// using namespace std;
// bool binarySearch(int *arr, int s, int e, int k){
//     // element not found
//     if(s>e){
//         return false;
//     }
    
//     int mid = s+(e-s)/2;
//     if(arr[mid]==k){
//         return true;
//     }
//     if(arr[mid]<k){
//         return binarySearch(arr, mid+1, e, k);
         
//     }
//     else{
//         return binarySearch(arr, s, mid-1, k);
//     }
// }
// int main(){
// int arr[6]= {2,3,4,5,6,8};
// int size =6;
// int key= 10;
// bool ans = binarySearch(arr, 0,5,key);
// if(ans){
//     cout<<"Element is present "<<endl;
// }
// else{
//     cout<<"Element is not found"<<endl;
// }
// return 0;
// }

// #include<iostream>
// using namespace std;
// bool checkPallindrome(string str, int i, int j){
    
//     if(i>j)
//         return true;
    
//     if(str[i]!=str[j]){
//         return false;
//     }
//     else{
//         return checkPallindrome(str, i+1, j-1);
//     }
// }
// int main(){
// string str = "nitin";
// bool ans = checkPallindrome(str, 0, str.length()-1);
// if(ans){
//     cout<<"string is pallindrome"<<endl;
// }
// else{
//     cout<<"string is not a pallindrome"<<endl;
// }

// return 0;
// }


// #include<iostream>
// using namespace std;
 
// int main(){
// int a, b;
// cin>>a>>b;
// int ans =1;
// for(int i=0; i<b; i++){
//     ans = ans *a;
// }
// cout<<ans<<endl;
// return 0;
// }


// #include<iostream>
// using namespace std;
//  int pow(int a, int b){
//      if(b==0){
//         return 1;
//      }
//      if(b==1){
//         return a;
//      }
//      int ans = pow(a, b/2);

//      // if b is even
//      if(b%2==0){
//         return ans*ans;
//      }
//      else{
//         return a* ans*ans;
//      }
//  }
// int main(){
// int a, b;
// cin>>a>>b;

// int ans = pow(a,b);
// cout<<"Answer is "<<ans<<endl;
// return 0;
// }

// bubble sort using recursion
// #include<iostream>
// using namespace std;
// void bubble(int *arr, int n){
//     if(n==0 || n==1){
//         return ;
//     }
//     for(int i=0; i<n-1; i++){
//         if(arr[i]>arr[i+1]){
//             swap(arr[i], arr[i+1]);
//         }
//     }
//     bubble(arr, n-1);
    
// }
// void print(int *arr, int n){
//     for(int i=0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }
// int main(){
// int arr[6]= {2,3,1,4,5,0};
// bubble(arr,6);
// print(arr,6);

// return 0;
// }

#include<iostream>
using namespace std;
void selection(int *arr, int n){
    if(n==0 || n==1){
        return ;
    }
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n-1; j++){

        }
    }
}
int main(){
int arr[6]= {1,2,3,4,0,5};
selection(arr,6);
return 0;
}
