// #include<iostream>
// using namespace std;
// int power(int n){
//     if(n==0)
//     return 1;

//     int smallProblem=power(n-1);
//     int biggerProblem=2*smallProblem;
//     return biggerProblem;
// }
// int main(){
//     int n;
//     cin>>n;
//     int ans = power(n);
//     cout<<ans<<endl;
// }

// #include<iostream>
// using namespace std;
// void print(int n){
//     if(n==0){
//         return ;
//     }
//     cout<<n<<endl;
//     print(n-1);
    
// }
// int main()
// {
//     int n;
//     cin>>n;
//     cout<<endl;
//     print(n);
// }

#include<iostream>
using namespace std;
void ReachHome(int src, int dest){
    cout<<"Source is "<<src<<" Destination is "<<dest<<endl;
    if(src==dest){
        cout<<"Poch gya ghar"<<endl;
        return  ;
    }
    src++;

    ReachHome(src, dest);
}

int main()
{
    int src=0;
    int dest=10;

    ReachHome(src, dest);
}