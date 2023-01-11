// ABCD
// BCDE 
// CDEF 
// DEFG
 
//  #include<iostream>
// using namespace std;


// int main(){

//    int n;
//    cin>>n;
//    for(int i=1; i<=n; i++){
//     char startchar ='A'+i-1;
//     for(int j=1; j<=n; j++){
//         char ch =startchar+j-1;
//         cout<<ch;
//     }
//     cout<<endl;
//    }
// }



// #include<iostream>
// using namespace std;
 
// int main(){
// int n;
// cin>>n;
// for(int i=1; i<=n; i++){
//     char c='A'+i-1;
//     for(int j=1; j<=i; j++){
//         char ch =c+j-1;
//         cout<<ch;
//     }
//     cout<<endl;
// }
// return 0;
// }


// #include <iostream>
// using namespace std;

// int main() {

//   int n;
//   cin >> n;

//   for (int i = n; i >=1 ; i--) {
//    for(int j=i; j<=n; j++){
//     char ch ='A'+j-1;
//     cout<<ch;
//    }
//     cout << endl;
//   }
// }

//     *
//    **
//   ***
//  ****
// *****
// #include<iostream>
// using namespace std;
 
// int main(){
// int n;
// cin>>n;
// int i=1;
// while(i<=n){

// int spaces =1;
//     while(spaces<=n-i){
//         cout<<" ";
//         spaces++;
//     }
//     int star =1;
//     while(star<=i){
//         cout<<"*";
//         star++;
//     }
//     cout<<endl;
//     i++;
// }
// return 0;
// }


//    1
//   12
//  123
// 1234

// #include<iostream>
// using namespace std;
 
// int main(){
// int n;
// cin>>n;
// int i=1;
// while(i<=n){

// int spaces =1;
//     while(spaces<=n-i){
//         cout<<" ";
//         spaces++;
//     }
//     int star =1;
//     while(star<=i){
//         cout<<star;
//         star++;
//     }
//     cout<<endl;
//     i++;
// }
// return 0;
// }


// #include<iostream>
// using namespace std;
 
// int main(){
// int n;
// cin>>n;
// int i=1;
// while(i<=n){
//     int spaces =1;
//     while(spaces<=n-i){
//         cout<<" ";
//         spaces++;
//     }
//     int j=1;
//     while(j<=i){
//         cout<<"*";
//         j++;
//     }
//     j= i-1;
//     while(j>=1){
//         cout<<"*";
//         j--;
//     }
//     cout<<endl;
//     i++;
// }
// return 0;
// }



// #include <iostream>
// using namespace std;

// int main() {
//   int n;
//   cin >> n;
//   int i = 1;
//   while (i <= n) {
//     int spaces = 1;
//     while (spaces <= n - i) {
//       cout << " ";
//       spaces++;
//     }
//     int j = 1;
//     while (j <= i) {
//       cout << j;
//       j++;
//     }
//     j = i - 1;
//     while (j >= 1) {
//       cout << i;
//       j--;
//     }
//     cout << endl;
//     i++;
//   }
//   return 0;
// }

// #include<iostream>
// using namespace std;
 
// int main(){
// int n;
// cin>>n;
// int currRow=1;
// while(currRow<=(n/2)+1){
//     int spaces=1;
//     while(spaces<=(n/2)+1-currRow){
//         cout<<" ";
//         spaces++;
//     }
//     int currCol =1;
//     while(currCol <=(2* currRow)-1){
//         cout<<"*";
//         currCol++;
//     }
//     cout<<endl;
//     currRow++;
// }
// currRow =1;
// while(currRow<=n/2){
//     int spaces=1;
//     while(spaces<=currRow){
//         cout<<" ";
//         spaces++;
//     }
//     int currCol =2*((n/2)-currRow+1)-1;
//     while(currCol>=1){
//         cout<<"*";
//         currCol--;
//     }
//     cout<<endl;
//     currRow++;
// }
// return 0;
// }


// ****
// ***
// **
// *

// #include<iostream>
// using namespace std;
 
// int main(){
// int n;
// cin>>n;
// // for(int i =1; i<=n; i++){
// //     for(int j=n; j>=i; j--){
// //         cout<<"*";
// //     }
// //     cout<<endl;
// // }
// int i=1;
// while(i<=n){
//     int j=n;
//     while(j>=i){
//         cout<<"*";
//         j--;
//     }
//     cout<<endl;
//     i++;
// }
// return 0;
// }


// 12345
// 1234
// 123
// 12
// 1

// #include<iostream>
// using namespace std;
 
// int main(){
// int n;
// cin>>n;
// int i =n;
// while(i>=1){
//     int j=1;
//     while(j<=i){
//         cout<<j<<" ";
//         j++;
//     }

//     cout<<endl;
//     i--;
// }

// return 0;
// }



// 1
// 01
// 101
// 0101
// 10101

// #include<iostream>
// using namespace std;
 
// int main(){
// int n;
// cin>>n;
//  for(int i =1; i<=n; i++){
//     for(int j=1 ; j<=i; j++){
//         if((i+j)%2==0){
//             cout<<"1"<<" ";
//         }
//         else{
//             cout<<"0"<<" ";
//         }
//     }
//     cout<<endl;
//  }
// return 0;
// }

// 5
//     *****
//    *****
//   *****
//  *****
// *****

// #include<iostream>
// using namespace std;
 
// int main(){
// int n;
// cin>>n;
// for(int i=1; i<=n; i++){
//     for(int j= 1; j<=n-i; j++){
//         cout<<" ";
//     }
//     for(int k = 1; k<=n; k++){
//         cout<<"*";
//     }
//     cout<<endl;
// }
// return 0;
// }


//     1
//    12
//   123
//  1234
// 12345
// #include<iostream>
// using namespace std;
 
// int main(){
// int n;
// cin>>n;
//  for(int i=1; i<=n; i++){
//     for(int j=1; j<=n-i; j++){
//         cout<<" ";
//     }
//     for(int k=1; k<=i; k++){
//         cout<<k;
//     }
//     cout<<endl;
//  }
// return 0;
// }


// 5
//     1 
//    1 2 
//   1 2 3 
//  1 2 3 4
// 1 2 3 4 5
// #include<iostream>
// using namespace std;
 
// int main(){
// int n;
// cin>>n;
// for(int i =1; i<=n; i++){
//     for(int j=1; j<=n-i; j++){
//         cout<<" ";
//     }
//     for(int j=1; j<=i; j++){
//         cout<<j<<" ";
//     }
//     cout<<endl;
// }
// return 0;
// }

// 5
//     1 
//    2 1 2 
//   3 2 1 2 3 
//  4 3 2 1 2 3 4
// 5 4 3 2 1 2 3 4 5
// #include<iostream>
// using namespace std;
 
// int main(){
// int n;
// cin>>n;
// for(int i=1; i<=n;i++){
//     int j;
//     for(j=1; j<=n-i; j++){
//         cout<<" ";
//     }
//     int k=i;
//     for(; j<=n; j++){
//         cout<<k--<<" ";
//     }
//     k=2;
//     for(; j<=n+i-1; j++){
//         cout<<k++<<" ";
//     }
//     cout<<endl;
// }
// return 0;
// }

// 4
//    *
//   ***
//  *****
// *******
// *******
//  *****
//   ***
//    *

// #include<iostream>
// using namespace std;
 
// int main(){
// int n;
// cin>>n;
// for(int i=1; i<=n; i++){
//     for(int j=1; j<=n-i; j++){
//         cout<<" ";
//     }
//     for(int j=1; j<=2*i-1; j++ ){
//         cout<<"*";
//     }
//     cout<<endl;
// }
// for(int i=n; i>=1; i--){
//     for(int j=1; j<=n-i; j++){
//         cout<<" ";
//     }
//     for(int j=1; j<=2*i-1; j++ ){
//         cout<<"*";
//     }
//     cout<<endl;
// }
// return 0;
// }

// 9
//   *   *  
//  * * * * 
// *   *   *
// #include<iostream>
// using namespace std;
 
// int main(){
// int n;
// cin>>n;
// for(int i=1; i<=3; i++){
//     for(int j=1; j<=n; j++){
//         if((i+j)%4==0 ||i==2 && j%4==0){
//             cout<<"*";
//         }
//         else{
//             cout<<" ";
//         }
        
//     }
//     cout<<endl;
// }
// return 0;
// }
