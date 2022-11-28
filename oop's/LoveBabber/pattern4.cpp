//      1
//     121
//    12321
//   1234321


// #include<iostream>
// using namespace std;
// int main()
// {
//     int n ;
//     cin>>n;
//     int i=1;
//     while(i<=n){
//         int space;
//         space=n-i;
//         while(space){
//             cout<<" ";
//             space--;
//         }
//         int j=1;
//         while(j<=i){
            
//             cout<<j;
//            j++;
//         }
//         int start;
//         start=i-1;
//         while(start){
//             cout<<start;
//             start--;
//         }
        
//         cout<<endl;
//         i++;
//     }
// }

// ****
// ****
// ****
// ****
// ****

// #include<iostream>
// using namespace std;
 
// int main(){
// int n;
// cin>>n;
// int m;
// cin>>m;
// for(int i=0; i<n; i++){
//     for(int j=0; j<m; j++){
//         cout<<"*";
//     }
//     cout<<endl;
// }
// return 0;
// }


// ****
// *  *
// *  *
// *  *
// ****

// #include<iostream>
// using namespace std;
 
// int main(){
// int row, col;
// cin>>row>>col;
// for(int i=1; i<=row; i++){
//     for(int j=1; j<=col; j++){
//         if(i==1 || i==row){
//             cout<<"*";
//         }
//         else if(j==1 || j==col){
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

// *****
// ****
// ***
// **
// *

// #include<iostream>
// using namespace std;
 
// int main(){
// int n;
// cin>>n;
// // for(int i=0; i<=n; i++){
// //     for(int j=i; j<n; j++){
// //         cout<<"*";
// //     }
// //     cout<<endl;
// // }
// for(int i=0; i<n; i++){
//     for(int j=n; j>i; j--){
//         cout<<"*";
//     }
//     cout<<endl;
// }
// return 0;
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
// cin>> n;
// for(int i=1; i<=n; i++){
//     for(int j=1; j<=n; j++){
//         if(j<=n-i){
//             cout<<" ";
//         }
//         else{
//             cout<<"*";
//         }
//     }
//     cout<<endl;
// }
// return 0;
// }




// 5
// 11111
// 2222
// 333
// 44
// 5
// #include<iostream>
// using namespace std;
 
// int main(){
// int n;
// cin>>n;

// for(int i=1; i<=n; i++){
//     for(int j=n; j>=i; j--){
//         cout<<i;
//     }
//     cout<<endl;
// }
// return 0;
// }


// 1
// 22
// 333
// 4444
// 55555

// #include<iostream>
// using namespace std;
 
// int main(){
// int n;
// cin>>n;
// for(int i=1; i<=n; i++){
//     for(int j=1; j<=i; j++){
//         cout<<i;
//     }
//     cout<<endl;
// }
// return 0;
// }


#include<iostream>
using namespace std;
 
int main(){
int n;
cin>>n;
int count =1;
for(int i=1; i<=n; i++){
    for(int j=1; j<=i; j++){
        cout<<count<<" ";
        count++;
    }
    cout<<endl;
}
return 0;
}

