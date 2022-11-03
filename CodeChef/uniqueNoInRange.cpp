// #include <iostream>
// using namespace std;

// int main() {
	
// 	int t;
// 	cin>>t;
	
// 	while(t--){
// 	    int n;
// 	    int m;
//         int count=0;
// 	    cin>>n>>m;
// 	   for(int i=n; i<=m; i++){
// 	       int c= i%10;
//            if(c==2 ||c==3 || c==9){
//             count ++;
//            }
// 	    }
//        cout<<count<<endl;
// 	}
    
// 	return 0;
// }


#include<iostream>
using namespace std;
int largest(int arr[], int n){
	int i;
	int max = arr[0];
	for(int i=1; i<n; i++){
		if(arr[i]>max){
			max=arr[i];
		}
		
	}
	return max;
}
int main(){
	int t, n;
	cin>>t>>n;
	while(t--){
		int arr[n];
		for(int i=0; i<n; i++){
			cin>>arr[i];
		}

		largest(arr, n);
		cout<<largest(arr,n)<<" ";
	}
	
	return 0;
}
