#include<iostream>
using namespace std;
 
int main(){
int t;
cin>>t;

while(t--){
    string str;
    cin>>str;
    int n = str.length();
    int s= 0;
    int e= n-1;
    while(s<=e){
        swap(str[s], str[e]);
        s++;
        e--;
    }
    cout<<str;
}
return 0;
}
