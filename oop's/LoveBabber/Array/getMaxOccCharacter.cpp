#include<iostream>
using namespace std;
char getMaxOccChar(string s){
    int arr[26]={};

    //create an array to count the character
    for(int i=0; i<s.length(); i++){
        char ch= s[i];
        int number =0;
        number=ch-'a';
        arr[number]++;
    }

    //find maximum occ character
    int maxi=-1;
        int ans=0;
    for(int i=0; i<26; i++){
        if(maxi<arr[i]){
            ans=i;
            maxi=arr[i];
        }

    }
    char finalans='a'+ans;
    return finalans;
}
int main(){
    string s;
    cin>>s;
    cout<<getMaxOccChar(s)<<endl;
}