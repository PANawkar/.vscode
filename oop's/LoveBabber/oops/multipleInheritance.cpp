// #include<iostream>
// using namespace std;
 
//  class Animal{

//     public:
//     void bark(){
//         cout<<"Barking "<<endl;
//     }
//  };
//  class Human{
//     public:
//     void speak(){
//         cout<<"Speaking "<<endl;
//     }
//  };

//  class Hybrid : public Animal , public Human{

//  };
// int main(){
// Hybrid obj1;
// obj1.bark();
// obj1.speak();
// return 0;
// }


//Practise Problem
//First and Last Occurence

// #include<iostream>
// using namespace std;
// int firstOcc(int arr[], int n, int key)
// {
//     int s=0;
//     int e= n-1;
//     int ans=-1;
//     int mid = (s+e)/2;

//     while(s<=e)
//     {
       
//         if(arr[mid]==key){
//             ans =mid;
//             e=mid-1;
//         }
//         else if(arr[mid]<key){
//             s= mid+1;
//         }
//         else{
//            e= mid-1;
//         }
//         mid = (s+e)/2;
//     }
//         return ans;
// }

// int lastOcc(int arr[], int n, int key)
// {
//     int s=0;
//     int e= n-1;
//     int mid = (s+e)/2;
//     int ans=-1;
//     while(s<=e)
//     {
//         if(arr[mid]==key)
//         {
//             ans=mid;
//             s= mid+1;
//         }
//         else if(arr[mid]>key)
//         {
//             e= mid-1;
//         }
//         else{
//             s=mid+1;
//         }
//         mid = (s+e)/2;
//     }
//         return ans;
// }

// int main(){
// int arrr[6]={2,9,4,9,0,3};
// int key;
// // cin>>key;/

// firstOcc(arrr,6,9);
// lastOcc(arrr,6,9);
// // cout<<firstOcc(arrr,6,9)<<" "<<lastOcc(arrr,6,9)<<endl;
// cout<<firstOcc(arrr,6,9)<<endl;
// cout<<lastOcc(arrr,6,9)<<endl;
// return 0;
// }



// reverse a array
// [2,3,4,5,6];
// Output: [6,5,4,3,2];

// #include<iostream>
// using namespace std;

// void reverseArr(int arr[], int n)
// {
//     int s=0;
//     int e= n-1;
//     while(s<=e){
//         swap(arr[s], arr[e]);
//         s++;
//         e--;
//     }
// }
// int main()
// {
//     int arr[5]={2,3,4,5,6};
//     reverseArr(arr,5);

//     for(int i=0; i<5; i++){
//         cout<<arr[i]<<" ";

//     }
//     cout<<endl;
// }


// //move all negative number to the left side
// #include<iostream>

// #include<bits/stdc++.h>


// using namespace std;

// int main()
// {

//     int arr[7]={2,3,4,5-1,-2,0};
//     int n= sizeof(arr)/sizeof(arr[0]);
//     sort(arr, arr+n);

//     for(int i=0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;

    
//     return 0;
// }

