#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x;
	    cin>>x;
	   switch(x){
	       case 1: x<=100;
	        cout<<x<<endl;
	        break;
	       
	       case 2: 100<x<=1000;
	        cout<<x-25<<endl;
	        break;
	       
	       case 3: 1000-x<=5000;
	        cout<<x-100<<endl;
	        break;
	       case 4: x>5000;
	        cout<<x-500<<endl;
	        break;
	    }
	   
	}
	return 0;
}
