#include<iostream>
using namespace std;
class Solution {
private:
bool checkequal(int a[26],int b[26]){
    for(int i=0; i<26; i++){
        if(a[i]!=b[i]){
            return 0;
        }
    }
        return 1;
}
public:
    bool checkInclusion(string s1, string s2) {
        
        //count character array
        int count1[26]={0};
        for(int i=0; i<s1.length(); i++){
            int index=s1[i]-'a';
            count1[index]++;
        }
        
        //tranverse s2 string in window of size s1 length and compare
        
        int i=0;
        int windowsize=s1.length();
        //for first window
        int count2[26]= {0};
        while(i<windowsize){
            int index=s2[i]-'a';
            count2[index]++;
            i++;
            }
        
        if(checkequal(count1,count2))
            return 1;
        
        while(i<s2.length()){
            char newchar=s2[i];
            int index= newchar-'a';
            count2[index]--;
            
            char OldChar=s2[i-windowsize];
            index =OldChar-'a';
            count2[index]--;
            i++;
            
            if(checkequal(count1,count2))
                return 1;
        }
            return 0;
    }
        
};
int main(){
    string s1="ab";
    string s2="eidbaooo";

    bool checkInclusion(string s1,string s2);

    return 0;
}