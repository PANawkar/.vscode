// //move all negative number to the left side
// #include<iostream>
// #include<vector>
// #include<bits/stdc++.h>


// using namespace std;

// void move(vector<int>&arr){
//     sort(arr.begin(), arr.end());
// }
// int main()
// {

//     vector<int> arr={2,3,4,5-1,-2,0};
//     int n= sizeof(arr)/sizeof(arr[0]);
    
//     move(arr);

//     for(int i=0; i<n; i++){
//         cout<<i<<" ";
//     }
//     cout<<endl;

    
//     return 0;
// }

// A C++ program to put all negative
// numbers before positive numbers
// #include <bits/stdc++.h>
// using namespace std;

// void rearrange(int arr[], int n)
// {
// 	int j = 0;
// 	for (int i = 0; i < n; i++) {
// 		if (arr[i] < 0) {
// 			if (i != j)
// 				swap(arr[i], arr[j]);
// 			j++;
// 		}
// 	}
// }

// // A utility function to print an array
// void printArray(int arr[], int n)
// {
// 	for (int i = 0; i < n; i++)
// 		printf("%d ", arr[i]);
// }

// // Driver code
// int main()
// {
// 	int arr[] = { -1, 2, -3, 4, 5, 6, -7, 8, 9 };
// 	int n = sizeof(arr) / sizeof(arr[0]);
// 	rearrange(arr, n);
// 	printArray(arr, n);
// 	return 0;
// }


#include<iostream>
using namespace std;
void selectSort(int *arr, int n){
	for(int i=0; i<n-1; i++){
		int minIndex=1;
		for(int j=i+1; j<n; j++){
			if(arr[j]<arr[minIndex]){
				minIndex =j;
			}
			
		}
		swap(arr[minIndex], arr[i]);
	}
	
}
int main(){
int arr[6]= { 1,3,4,5,2,0};	 
selectSort(arr, 6);
return 0;
}
