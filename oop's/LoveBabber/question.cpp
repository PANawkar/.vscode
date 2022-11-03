// #include<iostream>
// using namespace std;
// int main()
// {
//     int a, b=1;
//     a=10;
//     if(++a){
//         cout<<b<<endl;
//     }
//     else{
//         cout<<++b<<endl;
//     }
// }
// //ANS:1

// #include<iostream>
// using namespace std;
// int main()
// {
//     int a=1;
//     int b=2;
//     if( a-->0 && ++b>2){
//         cout<<"Stage 1 inside If"<<endl;
//     }
//     else{
//         cout<<"Stage 2 inside else"<<endl;
//     }
//     cout<<a<<" "<<b<<endl;
//  }
// ANS: Stage 1 inside if 
// 0,3

// #include<iostream>
// using namespace std;
// int main()
// {
//     int a=1;
//     int b=2;
//     if(++b<2 || --a<0){
//         cout<<"Stage 1 inside If"<<endl;
//     }
//     else{
//         cout<<"Stage 2 inside else"<<endl;
//     }
//     cout<<a<<" "<<b<<endl;
//  }
// ANS: Stage 2 inside else
// 0,3

// #include<iostream>
// using namespace std;
// int main()
// {
//     int number=3;
//     cout<<25*(++number)<<endl;

// }


// #include<iostream>
// using namespace std;
// int  main(){
// int a=1;
// int b=a++;
// int c=++a;
// cout<<b<<" "<<c" "<<a<<endl;
// }
// ANS:1 3 3

// #include<iostream>
// using namespace std;
// int main()
// {
//     for(int i=0; i<=5;i++){
//         cout<<i<<" ";
//         i++;
//     }
// }
// ANS:0 2 4 

// #include<iostream>
// using namespace std;
// int main()
// {
//     for(int i=0; i<=5;i--){
//         cout<<i<<" ";
//         i++;
//     }
// }
// AND: Infinite loop of zero

// #include<iostream>
// using namespace std;
// int main(){
//     for(int i=0; i<=15;i+=2){
//         cout<<i<<" ";
 
//         if(i&1){
//             continue;
//         }
//         i++;
//     }
// }
// ANS: 0 3 5 7 9 11 13 15 

// #include<iostream>
// using namespace std;
// int main()
// {
//     for(int i=0;i<5;i++){
//         for(int j=i;i<=5;j++){
//             cout<<i<<" "<<j<<endl;
            
//         }
        
//     }
// }
// ANS: Infinite Loop of Number printing 0, .....


// #include<iostream>
// using  namespace std;
// int main(){
//     for(int i=0; i<5;i++){
//         for(int j=i;j<=5;j++){
//             if(i+j==10){
//                 break;
                
//             }
//             cout<<i<<" "<<j<<endl;
//         }
//     }
// }

// ANS : 
// 0 0
// 0 1
// 0 2
// 0 3
// 0 4
// 0 5
// 1 1
// 1 2
// 1 3
// 1 4
// 1 5
// 2 2
// 2 3
// 2 4
// 2 5
// 3 3
// 3 4
// 3 5
// 4 4
// 4 5