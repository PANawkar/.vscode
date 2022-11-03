#include<iostream>
using namespace std;
class student{
    string name;
    public:

    
    int age;
    bool gender;

    student(){
        cout<<"Default Constructor"<<endl;    //default constructor
    }

    student(string s,int a,int g){     //  parameterised constructor
        name =s;
        age=a;
        gender=g;
    }

    ~student(){
        cout<<"Destructor called"<<endl;
    }
    void setname(string s){   //setter function
        name=s;
    }
    void getname(){
        cout<<name<<endl;
    }
    void printInfo(){
        cout<<"Name = ";
        cout<<name<<endl;
        cout<<"Age = ";
        cout<<age<<endl;
        cout<<"Gender = ";
        cout<<gender<<endl;

    }

    bool operator == (student &a){
        if(name==a.name && age==a.age  && gender==a.gender){
            return true;
        }
        return false;
    }
};

int main()
{
    // student arr[3];
    // for(int i=0;i<3;i++){
    //     cout<<"Name = ";
    //     string s;
    //     cin>>s;
    //     arr[i].setname(s);
    //     cout<<"Age = ";
    //     cin>>arr[i].age;
    //     cout<<"Gender = ";
    //     cin>>arr[i].gender;
    // }
    // for(int i=0;i<3;i++){
    //     arr[i].printInfo();
    // }
    student a("Pratik",20,0);
    a.printInfo();

    student b;
    student c(a);

    if(c==a){
        cout<<"same"<<endl;
    }
    else{
        cout<<"not same"<<endl;
    }
    return 0;
}