// #include<iostream>
// using namespace std;

// void update(int a){
//     a=a/2;
// }
// int main(){
// int a=10;
// update(a);
// cout<<a<<endl;
// }
// ANS: 10

// #include<iostream>
// using namespace std;
// int update(int a){
//     a-=5;
//     return a;
// }
// int main()
// {
//     int a=15;
//     update(a);
//     cout<<a<<endl;

// }
// ANS:15

// #include<iostream>
// using namespace std;
// int update(int a){
//     int ans=a*a;
//     return ans;
// }
// int main()
// {
//     int a=14;
//     a=update(a);
//     cout<<a<<endl;
// }
// ANS:196

#include<iostream>
using namespace std;
int main()
{
    int array[10]={1};
    int n=10;
    for(int i=0; i<=n;i++){
        cout<<array[i]<<endl;
    }
}