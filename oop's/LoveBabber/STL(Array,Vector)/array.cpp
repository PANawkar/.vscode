// #include<iostream>
// #include<array>
// using namespace std;
// int main()
// {
//     int basic[3]{1,2,3};
//     array<int,4> a={1,2,3,4};
//     int  size=a.size();
//     for(int i=0; i<size; i++){
//         cout<<a[i]<<endl;
//     }
// }

/*
****
 ***
  **
   *
   */

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i= 1;i<=n;i++){
        for(int j=1; j<=n; j++){
            if(j<=i){
                cout<<" ";
            }
            else{
                cout<<"*";
            }
        }
            cout<<endl;
        
    }
}



    
