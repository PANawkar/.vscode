#include<iostream>
#include<math.h>
using namespace std;
int setA(int a){
    int count=0;
    while(a!=0){
        if(a&1){
            count++;
        }
        a=a>>1;

    }
    return count;
}

int setB(int b){
    int count=0;
    while(b!=0){
        if(b&1){
            count++;
        }
        b=b>>1;

    }
    return count;
}

int main()
{
int p;
cin>>p;
setA(p);
int ans1= setA(p);
cout<<ans1<<endl;
int q;
cin>>q;
setB(q);
int ans2=setB(q);
cout<<ans2<<endl;
int ans = ans1+ans2;
cout<<"The total number of setBit is "<<ans<<endl;


}



// #include<iostream>
// #include<math.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int ans=0;
//     int i=0;

//     while(n!=0){
//         int bit= n & 1;
//         ans=(bit*pow(10,i)+ans);
//     n=n>>1;
//     i++;
//     }
    
//     cout<<"Answer is "<<ans<<endl;

// }