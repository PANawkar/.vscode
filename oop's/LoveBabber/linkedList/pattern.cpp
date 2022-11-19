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
