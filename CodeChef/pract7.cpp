#include<iostream>
#include<cstdlib>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int x;
        cin>>x;
        if(x<100){
            cout<<"Easy"<<endl;        
            }
        else if(x<200){
            cout<<"Medium"<<endl;
        }
        else {
            cout<<"Hard"<<endl;
        }
    }
    
     return 0;
}