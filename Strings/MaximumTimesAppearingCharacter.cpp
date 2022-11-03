//a b c a c b a d e     to      a=3,b=2,c=2,d=1,e=1

#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
    string s="abcdefghijklmnoaaaadbbbbbpqrstuvwxyz";
    
    int freq[26];

    for(int i=0;i<26;i++)
        freq[i] =0;

    for(int i=0;i<s.size();i++)
        freq[s[i]-'a']++;

    char ans ='a';
    int maxF=0;

    for(int i=0;i<26;i++)
    {
        if(freq[i] >maxF)
        {
            maxF =freq[i];
            ans = i+'a';
        }
    }

    cout<<maxF<<" "<<ans <<endl;
    return 0;
}