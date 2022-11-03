#include<iostream>
using namespace std;

bool checKPallindrome(string s, int i, int j){
    //base case
    if(i>j){
        return true;
    }

    if(s[i]!=s[j]){
        return false;
        
    }
    else{
        //recursive call
        return checKPallindrome(s,i+1,j-1);
        
    }
    

}
int main()
{
    string s="abcddacba";
    bool isPalindrome=checKPallindrome(s,0,s.length()-1);

    if(isPalindrome){
        cout<<"It is Pallindrome"<<endl;
    }
    else{
        cout<<"It is  not Pallindrome"<<endl;
    }

    return 0;
}