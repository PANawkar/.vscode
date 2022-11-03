// #include <iostream>
// using namespace std;

// int main() {
	
// 	int t;
// 	cin>>t;
//     int n, key;
// 	    cin>>n>>key;
// 	while(t--){
	    
// 	    int arr[n];
	    
        
// 	    int count=0;
// 	    for(int i=0; i<n; i++){
// 	        cin>>arr[i];
	
// 	    }
//         for(int i=0; i<n; i++){
//              if(i>key){
// 	        count++;
// 	    }
// 	    else{
// 	        return 0;
// 	    }
//         }
//         cout<<count<<endl;
	    
// 	}
// 	return 0;
// }


#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int ans= __builtin_popcount(n)-1;
	cout<<ans<<endl;
}