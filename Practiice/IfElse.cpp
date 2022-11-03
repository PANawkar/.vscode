#include<iostream>
using namespace std;
int main(){
    char c;
    int isLowercase,isUppercase;
    cout<<"enter the alphabet";
    cin>>c;
    isLowercase=(c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
    isUppercase=(c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
    if(isUppercase||isLowercase){
        cout<<"character is vowel"<<endl;
    }
    else{
        cout<<"character is consonant"<<endl;
 
    }
    return 0;
}