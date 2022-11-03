//first method

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }
    
//     for(int i=0; i<n;i++){
//         for(int j=i;j<n;j++){
//             swap(arr[i],arr[j]);
//         }
//     }
//     for(int i=0;i<n; i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }


#include<iostream>
#include<vector>
using namespace std;

vector<int> reverse(vector<int>v){
    int s=0;
    int e=v.size()-1;
    while(s<=e){
        swap(v[s],v[e]);
        s++;
        e--;
    }
    return v;
}

void print(vector<int>v){
    for(int i=0; i<v.size(); i++){
            cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int>v;
    v.push_back(4);
    v.push_back(11);
    v.push_back(15);
    v.push_back(19);
    v.push_back(480);

    vector<int>ans=reverse(v);

    cout<<"Printing the reverse array "<<endl;
    print(ans);

}