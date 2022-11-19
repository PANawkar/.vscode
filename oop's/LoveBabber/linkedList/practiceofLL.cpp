//reverse a string 
// #include<iostream>
// using namespace std;
 
// int main(){
// string str ="abcdef";
// int i=0;
// int j= str.length()-1;
// while(i<j){
//     swap(str[i], str[j]);
//     i++;
//     j--;
// }
// for(int i=0; i<str.length()-1; i++){
//     cout<<str[i];
// }
// return 0;
// }

//
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
//         arr[i]= arr[j];
//     }
//     return i+1;
//  }
//  void print(int arr[], int n){
//     for(int i=0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//  }
// int main(){
 
// int arr[6]={3,3,5, 5,6,7};
// removeDuplicate(arr,6);
// print(arr,6);

// return 0;
// }


//remove element from an array
//5,3,3,4,1   k=3
// output 5,4,1 
// #include<iostream>
// using namespace std;
// int removeElement(int arr[], int n, int k){
//     int begin =0;
//     for(int i=0; i<n; i++){
//         if(arr[i]!=k){
//             arr[begin]= arr[i];
//             begin ++;
//         }
//     }
//     return begin;
// }

// void print(int arr[], int n){
//     for(int i=0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//  }
// int main(){
// int arr[5]={5,3,3,4,1};
// removeElement(arr,5,3);
// print(arr,3);
// return 0;
// }


// #include<iostream>
// using namespace std;
// int getLength(char s[]){
//     int count =0;
//     for(int i=0; s[i]!='\0'; i++){
//         count++;
//     }
//     return count;
// }
//  void reverse(char s[], int n){
//     int i=0;
//     int j= n-1;
//     while(i<j){
//         swap(s[i], s[j]);
//         i++;
//         j--;
//     }

//  }
// int main(){
// char s[20];
// cin>>s;
// int n = getLength(s);
// reverse(s,n);

// cout<<s<<endl;
// return 0;
// }

