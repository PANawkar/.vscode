#include<iostream>
using namespace std;

//Length of string
int getLength(char name[]){
    int count=0;
    for(int i=0; name[i]!='\0';i++){
        count++;
    }
    return count;
}

//check pallindrome

bool checkPallindrome(char a[],int n){
    int s=0;
    int e=n-1;
    while(s<=e){
        if(a[s]!=a[e]){
            return 0;
        }
        else{
            s++;
            e--;
        }

    }
    return 1;
}
//TO reverse a string 
void reverseStr(char name[], int n){
    int s=0;
    int e=n-1;
    while(s<e){
        swap(name[s++],name[e--]);
    }
    
}

char lowercase(char a){
    if(a>='a' && a<='z'){
        return a;
    }
    else{
        a=a-'A'+'a';
        return a;
    }
}
int main(){
    char name[20];
    cout<<"Enter the name "<<endl;
    cin>>name;
    
    cout<<"Name is " <<name<<endl;
    cout<<"length is "<<getLength(name)<<endl;
    int key=getLength(name);
    cout<<"Reverse is "<<endl;
    reverseStr(name,key);
    cout<<"Enter the name "<<endl;
    cout<<name<<endl;
    cout<<"CHEck Pallindrome " <<checkPallindrome(name,key)<<endl;;
    
    cout<<"Charctor is "<<lowercase('b')<<endl;
    cout<<"Charctor is "<<lowercase('D')<<endl;
    char abc [20];
    cin>>abc;
    cout<<abc<<endl;

    string str="abcd1 '\n' bdf";
    cout<<str<<endl;

}


