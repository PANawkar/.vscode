//sum of all even number

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int sum=0;
//     for(int i=0; i<=n; i++){
//         if(i%2==0){
//             cout<<i<<endl;
//             sum=sum+i;
//         }
//     }
//     cout<<"THe sum is "<<sum<<endl;
// }

// sum of all odd number

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int sum=0;
//     for(int i=0; i<=n; i++){
//         if(i%2!=0){
//             cout<<i<<endl;
//             sum=sum+i;
//         }
//     }
//     cout<<"THe sum of odd number is "<<sum<<endl;
// }


// reverse the integer

// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;

//     int ans=0;

//     while(n!=0){
//     int digit=n%10;
//     if(ans>INT32_MAX || ans<INT32_MIN){
//         return 0;
//     }
//     ans=(ans*10)+digit;
//     n=n/10;
//     }
//     cout<<"Reverse of int is "<<ans<<endl;
// }


//Simple Calculator

// #include<iostream>
// using namespace std;
// int main()
// {
//     cout<<"Enter the value of a and b"<<endl;
//     int a,b;
//     cin>>a>>b;

//     cout<<"Enter the operation "<<endl;
//     char op;
//     cin>>op;

//     switch (op)
//     {
//     case '+':{
//         cout<<a+b<<endl;
//     }
//         break;
//     case '-':{
//         cout<<a-b<<endl;
//     }
//         break;
//     case '*':{
//         cout<<a*b<<endl;
//     }
//         break;
//     case '/':{
//         cout<<a/b<<endl;
//     }
//         break;
//     }

// }


//Right angle triangle pattern

// *
// **
// ***
// ****
// *****

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     // for(int i=1; i<=n; i++){
//     //     for(int j=1; j<=i; j++){
//     //         cout<<"*";
//     //     }
//     //     cout<<endl;
//     // }

//     int i=1;
//     while(i<=n){
//         int j=1;
//         while(j<=i){
//             cout<<"*";
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
    
// }


//fibonacci series
// 1
// #include<iostream>
// using namespace std;
// int fib(int n){
//     if(n==0 )
//     return 0;
//     if(n==1)
//     return 1;
//     int ans=fib(n-1)+fib(n-2);
//     return ans;
// }
// int main()
// {
//     int n;
//     cin>>n;
//     cout<<fib(n)<<endl;

// }

// 2

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int a=0;
//     int b=1;
//     cout<<"a is "<<a<<" b is "<<b<<endl;
//     for(int i=1; i<=n;i++){
//         int nextNumber=a+b;
//         cout<<nextNumber<<" ";
//         a=b;
//         b=nextNumber;
//     }
// }

// 12345
// 12345
// 12345
// 12345
// 12345

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int i=1;
//     while(i<=n){
//         int j=1;
//         while(j<=n){
//             cout<<j;
//             j++;
//         }cout<<endl;
//         i++;
//     }
// }


// 1 2 3 4 5
// 6 7 8 9 10
// 11 12 13 14 15
// 16 17 18 19 20
// 21 22 23 24 25

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int count=1;
//     // for(int i=0; i<n; i++){
//     //     for(int j=0; j<n; j++){
//     //         cout<<count<<" ";
//     //         count++;
//     //     }cout<<endl;
//     // }
//     int i=1;
//     while(i<=n){
//         int j=1;
//         while(j<=n){
//             cout<<count<<" ";
//             count++;
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// }


// 54321
// 54321
// 54321
// 54321
// 54321
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
    
//     // for(int i=1; i<=n; i++){
//     //     for(int j=1; j<=n; j++){
//     //         cout<<n-j+1;
//     //     }
//     //     cout<<endl;
//     // }
//     int i=1;
//     while(i<=n){
//         int j=1;
//         while(j<=n){
//             cout<<n-j+1;
//             j++;
//         }
//         i++;
//         cout<<endl;
//     }
// }


//Celius to farehneit
// #include<iostream>
// using namespace std;
// int main()
// {
//     double c;
//     cin>>c;

//     float f= c*1.8+32;
//     cout<<f<<endl;
// }


// abcd
// abcd
// abcd
// abcd

// #include<iostream>
// using namespace std;
// int main(){
//     int i=1;
//     int n;
//     cin>>n;
//     while(i<=n){
//         int j=1;
//         while(j<=n){
//             char ch ='a'+j-1;
//             cout<<ch;
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// }


// a
// ab
// abc 
// abcd 

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int i=1;
//     while(i<=n){
//         int j=1;
//         while(j<=i){
//             char ch='a'+j-1;
//             cout<<ch;
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// }

// abcde
// fghij
// klmno
// pqrst

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     char start='a';
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=n; j++){
            
//             cout<<start;
//             start++;
//         }
//         cout<<endl;
//     }
// }

// ABCDE
// BCDEF
// CDEFG
// DEFGH
// EFGHI

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=n; j++){
//             char ch= 'A'+i+j-2;
//             cout<<ch;
//         }
//         cout<<endl;
//     }
// }


// A 
// BB 
// CCC 
// DDDD
// EEEEE
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=i; j++){
//             char ch= 'A'+i-1;
//             cout<<ch;
//         }
//         cout<<endl;
//     }
// }


// E
// DE
// CDE
// BCDE
// ABCDE

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int i=1;
//     while(i<=n){
//         int j=1;
//         char ch= 'A'+n-i;
//         while(j<=i){
            
//             cout<<ch;
//             ch++;
//             j++;
//         }
//         cout<<endl;
//         i++;
        
//     }
// }


// A 
// BB 
// CCC 
// DDDD
// EEEEE 

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int i=1;
//     while(i<=n){
//         int j=1;
//         while(j<=i){
//             char ch='A'+i-1;
//             cout<<ch;
//             j++;
//         }
//         cout<<endl;
//         i++;
        
//     }
// }


//Binary to decimal

// #include<iostream>
// #include<math.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int ans=0;
//     int i=0;
//     while (n!=0)
//     {
//         int digit=n%10;
//         if(digit==1){

//             ans=ans+pow(2,i);
//         }
//         n=n/10;
//         i++;
//     }
//     cout<<"Ans is "<<ans<<endl;
    
// }

   
// *
//  **
//   ***
//    ****
//     *****

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int i=1;
//     while(i<=n){
//         int space =i-1;
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


//  if a number is given how many time 100 are there
// example int n=1330;
// output: 13

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int p, q,r;
//     int num;
//     cin>>num;
//     switch(num){
//         case(100):{
//             p=n/100;
//             n=n%100;
//             cout<<p<<endl;
//         }
//         case(20):{
//             q=n/20;
//             n=n%20;
//             cout<<q<<endl;
//         }
//         case(1):{
//             r=n/1;
//             n=n%1;
//             cout<<r<<endl;
//         }
//     }
// }

// reverse an array
// #include<iostream>
// using namespace std;
//  void reverse(int arr[], int n){
//     for(int i=0; i<n; i++){
//         for(int j=i; j<n; j++){
//             swap(arr[i], arr[j]);
//         }
//     }
//  }
//  int printarr(int arr[], int n){
//     for(int i=0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//  }
// int main(){
//     int n;
//     cin>>n;
// int arr[n];
// for(int i=0; i<n; i++){
//     cin>>arr[i];
// }
// reverse(arr,n);
// printarr(arr, n);
// return 0;
// }


//find duplicate in array
// #include<iostream>
// using namespace std;
 
// int main(){
// int arr[6]={1,2,3,3,4,3};
// for(int i=0; i<6; i++){
//     for(int j=i+1; j<6; j++){
//         if(arr[i]==arr[j]){
//             cout<<arr[i]<<endl;
//         }
//     }
// }
// return 0;
// }


// #include<iostream>
// using namespace std;
 
// int main(){
//     int count=0;
//     int key=3;
// int arr[6]={1,2,3,3,3,4};
// for(int i=0; i<6; i++){
//     for(int j=i+1; j<6; j++){
//         if(arr[i]==arr[j]){
//             cout<<arr[i]<<endl;
//         }
        
//     }
// }
// // for(int i=0; i<6; i++){
// //     if(arr[i]==key){
// //         count++;
// //     }
// // }

// cout<<"Count is "<<count<<endl;
// return 0;
// }

//adding of two array
// #include<iostream>
// using namespace std;
// int addArr(int arr1[], int n, int arr2[], int m){
//     int sum=0;
//     for(int i=0; i<n; i++){
//         for(int j=0; j<m; j++){
//             sum=i+j;
//         }
//     }
//     cout<<sum<<endl;
// }
 
// int main(){
// int arr1[1]={10};
// int arr2[4]={1,2,3,4};
// addArr(arr1,1,arr2,4);
// return 0;
// }

// Binary Search

// #include<iostream>
// using namespace std;
//  int binarySearch(int arr[], int n, int key){
//     int s=0;
//     int e=n-1;
//     int mid=s+(e-s)/2;
//     while(s<=e){
//         int mid=s+(e-s)/2;
//         if(arr[mid]==key){
//             return mid;
//         }
//         else if(arr[mid]>key){
//             return e=mid-1;
//         }
//         else{
//             return s=mid+1;
//         }
        
//     }
//     return -1;
//  }
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     int key;
    
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }
//     cin>>key;
//     cout<<binarySearch(arr, n, key)<<endl;

// return 0;
// }


//palindrome
// #include<iostream>
// using namespace std;
//  bool checkPallindrome(string s, int i, int j){
//     //base case
//     if(i>j){
//         return true;
//     }

//     if(s[i]!=s[j]){
//         return false;
//     }
//     //recursive call
//     checkPallindrome(s,i+1,j-1);

//  }
// int main(){
// int n=121;

// string s;
// cin>>s;
// bool isPallindrome= checkPallindrome(s,0, s.length()-1);
// if(isPallindrome){
//     cout<<"It is Pallindrome"<<endl;
// }
// else{
//     cout<<"not Pallindrome"<<endl;
// }
// // for(int i=0; i<s.length()-1; i++){
// //     for(int j=i+1; j<s.length()-1; j++){
// //         if(s[i]!=s[j]){
// //             cout<<"Not Pallindrome"<<endl;
// //         }
// //         else{
// //             cout<<"Pallindrome"<<endl;
// //         }
// //     }
// // }

// return 0;
// }

//selection sort

// #include<iostream>
// using namespace std;
//  void selection(int arr[], int n){
// for(int i=0; i<n-1; i++){
//     for(int j=i+1; j<n; j++){
//         if(arr[j]<arr[i]){
//         int temp=arr[j];
//         arr[j]=arr[i];
//         arr[i]=temp;
        
//         // swap(arr[j], arr[i]);
//     }}
// }
//  }
// int main(){
// int n;
// cin>>n;
// int arr[n];
// for(int i=0; i<n; i++){
//     cin>>arr[i];
// }
// selection(arr,n);
// for(int i=0; i<n; i++){
//     cout<<arr[i]<<" ";
// }
// cout<<endl;

// return 0;
// }


//Bubble sort
// #include<iostream>
// using namespace std;
 
//  void bubbleSort(int arr[], int n){
//     //base case
//     if(n==1){
//         return ;
//     }
//     for(int i=0; i<n-1; i++){
//     if(arr[i]>arr[i+1]){
//         swap(arr[i],arr[i+1]);
//     }
//     }
//     bubbleSort(arr,n-1);
    
//  }
// int main(){
// int arr[6]={2,1,3,5,8,0};
// bubbleSort(arr,6);
// for(int i=0; i<6; i++){
//     cout<<arr[i]<<" ";
// }
// cout<<endl;
// return 0;
// }


// #include<iostream>
// using namespace std;
 
// int main(){
// int arr[6]={2,1,3,5,8,0};
// for(int i=0; i<5; i++){
//     for(int j=0; j<6-i-1;j++){
//         if(arr[j]>arr[j+1]){
//         swap(arr[j],arr[j+1]);
// }
//     }
// }
// for(int i=0; i<6; i++){
//     cout<<arr[i]<< " ";
// }
// cout<<endl;
// return 0;
// }


//Remove duplicate number from array
// #include<iostream>
// #include<vector>
// using namespace std;
// int removeDuplicate(int a[], int n){
//     if(n==0){
//         return 0;
//     }
//     int prev=0;
//     for(int i =1; i<n-1; i++){
//         if(a[prev]!=a[i]){
//             prev++;
//         }a[prev]=a[i];
//     }
//     int count=prev+1;
//     return count;
// }
// int main(){
// int n;
// cin>>n;
// int a[n];
// for(int i=0; i<n; i++){
//     cin>>a[i];
// }
// removeDuplicate(a,n);
// for(int i=0; i<n; i++){
//     cout<<a[i]<<" ";
// }
// cout<<endl;
// // for(int i=0; i<n; i++){
// //     for(int j=i+1; j<n; j++){
// //         if(a[j]==a[i]){
// //             a.pop_back(arr[j]);
// //         }
// //     }
// //  }
// return 0;
// }
// class Solution {
// public:
//     int removeDuplicates(vector<int>& nums) {
//         if(nums.size()==0){
//             return 0;
//         }
        
//         int i=0;
//         for(int j=1; j<nums.size();j++){
//             if(nums[i]!=nums[j]){
//                 i++;
//             }
//             nums[i]=nums[j];
//         }
//         return i+1;
//     }
// };

// #include<iostream>
// using namespace std;
//  int removeDuplicate(int arr[], int n){
//     if(n==0){
//         return 0;
//     }
//     int i=0;
//     for(int j=0; j<n; j++){
//         if(arr[i]!=arr[j]){
//             i++;
//         }
//         arr[i]=arr[j];
//     }
//     return i+1;
//  }
// int main(){
// int arr[8]={1,1,2,3,4,4,5,6};
// removeDuplicate(arr,8);
// for(int i=0; i<8; i++){
//     cout<<arr[i]<<" ";
// }
// cout<<endl;
// return 0;
// }


