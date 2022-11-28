//reverse a string 
// #include<iostream>
// using namespace std;
 
// int main(){
// string str ="abcdef";
// int i=0;
// int j= str.length()-1;
// while(i<j){
//     swap(str[i], str[j]);
//     i++;
//     j--;
// }
// for(int i=0; i<str.length()-1; i++){
//     cout<<str[i];
// }
// return 0;
// }

//
// #include<iostream>
// using namespace std;
//  int removeDuplicate(int arr[], int n){
//     if(n==0){
//         return 0;
//     }
//     int i=0;
//     for(int j=0; j<n; j++){
//         if(arr[i]!=arr[j]){
//             i++;
//         }
//         arr[i]= arr[j];
//     }
//     return i+1;
//  }
//  void print(int arr[], int n){
//     for(int i=0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//  }
// int main(){
 
// int arr[6]={3,3,5, 5,6,7};
// removeDuplicate(arr,6);
// print(arr,6);

// return 0;
// }


//remove element from an array
//5,3,3,4,1   k=3
// output 5,4,1 
// #include<iostream>
// using namespace std;
// int removeElement(int arr[], int n, int k){
//     int begin =0;
//     for(int i=0; i<n; i++){
//         if(arr[i]!=k){
//             arr[begin]= arr[i];
//             begin ++;
//         }
//     }
//     return begin;
// }

// void print(int arr[], int n){
//     for(int i=0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//  }
// int main(){
// int arr[5]={5,3,3,4,1};
// removeElement(arr,5,3);
// print(arr,3);
// return 0;
// }


// #include<iostream>
// using namespace std;
// int getLength(char s[]){
//     int count =0;
//     for(int i=0; s[i]!='\0'; i++){
//         count++;
//     }
//     return count;
// }
//  void reverse(char s[], int n){
//     int i=0;
//     int j= n-1;
//     while(i<j){
//         swap(s[i], s[j]);
//         i++;
//         j--;
//     }

//  }
// int main(){
// char s[20];
// cin>>s;
// int n = getLength(s);
// reverse(s,n);

// cout<<s<<endl;
// return 0;
// }

// merge sort using recursion
// #include<iostream>
// using namespace std;
// void merge(int *arr, int s, int e){
//     int mid = s+(e-s)/2;

//     int len1 =  mid-s+1;
//     int len2 = e-mid;
//     int *first = new int[len1];
//     int *second = new int[len2];

//     //copy values
//     int mainArrayIndex =s;
//     for(int i=0; i<len1; i++){
//         first[i]= arr[mainArrayIndex++];
//     }

//      mainArrayIndex = mid+1;
//     for(int i=0; i<len2; i++){
//         second[i] = arr[mainArrayIndex++];
//     }
//     // merge two sorted array
//     int index1=0;
//     int index2=0;

//     mainArrayIndex=s;
     
//     while(index1<len1 && index2<len2){
//         if(first[index1] < second[index2]){
//             arr[mainArrayIndex++]= first[index1++];
//         }
//         else{
//             arr[mainArrayIndex++]= second[index2++];
//         }
//     }

//     while(index1<len1){
//         arr[mainArrayIndex++]= first[index1++];
//     }
//     while(index2<len2){
//         arr[mainArrayIndex++]= second[index2++];
//     }
//     delete[]first;
//     delete[]second;
// }
// void mergeSort(int *arr, int s, int e){
//     // base case
//     if(s>=e){
//         return;
//     }
//     int mid =s+(e-s)/2;
//     // left part sort kr de
//     mergeSort(arr,s, mid);

//     // right part sort kr de
//     mergeSort(arr,mid+1,e);

//     //merge
//     merge(arr,s,e);
// }
// int main(){
// int arr[5]= {3,2,4,5,1};
// int n =5;
// mergeSort(arr,0, n-1);

// for(int i=0; i<n; i++){
//     cout<<arr[i]<<" ";
// }
// cout<<endl;
// return 0;
// }


#include<iostream>
using namespace std;

int partition(int arr[], int s, int e){
    int pivot = arr[s];
    int cnt =0;
    for(int i=s+1; i<=e; i++){
        if(arr[i]<=pivot){
            cnt ++;
        }
    }

    // place pivot at right position
    int pivotIndex = s+ cnt;
    swap(arr[pivotIndex], arr[s]);

    // left and right wala part sambhal lete h
    int i =s, j=e;
    while(i<pivotIndex  && j>pivotIndex){
        while(arr[i]< pivot){
            i++;
        }
        while(arr[j]> pivot){
            j--;
        }

        if(i<pivotIndex  && j>pivotIndex){
            swap(arr[i++], arr[j--]);
        }
    }
    return pivotIndex;
}
void quickSort(int arr[], int s, int e){
    // base case
    if(s>=e){
        return ;
    }
    // partition 
    int p = partition(arr,s ,e);

    //left part sort kro
    quickSort(arr, s, p-1);

    // right part sort kro
    quickSort(arr, p+1, e);
}
int main(){
int arr[6] = {1,0, 0, 0, 2, 0};
int n =6; 

quickSort(arr, 0, n-1);

for(int i=0; i<n;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
return 0;
}
