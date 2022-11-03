#include<iostream>
using namespace std;
int main()
{
    int n ;
    cin>>n;
    int s1 =0; int s2=0;
    int winner,lead =0; int diff = 0;
    for(int i=0; i<n;i++){
        int p1, p2;
        cin>>p1>>p2;
        s1+=p1;
         s2+=p2;
      if(s1>s2){
          diff=s1-s2;
          if(diff>lead){
             lead=diff;
          winner=1;
      } 
      
      }
      else{
          diff= s2-s1;
          if(diff>lead){
              lead=diff;
              winner=2;
          }

      }
      cout<<winner<<" "<<lead;
      return 0;
        
    }
}