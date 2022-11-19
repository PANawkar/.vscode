#include<iostream>
#include<map>
using namespace std;
int main(){
    map<int,string>m;
    m[1]="Pratik";
    m[13]="Coder";
    m[2]="Nawkar";

    m.insert({5,"Bheem"});
    cout<<"before erase "<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }

    // m.erase(13);
    cout<<"after erase "<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }

    cout<<"finding 13 "<<m.count(13)<<endl;

    auto it=m.find(5);
    for(auto i=it; i!=m.end();i++){
        cout<<(*i).first<<endl;
    }
}

