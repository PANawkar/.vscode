#include<iostream>
using namespace std;
 
 class Student{
    private:
    int age;
    int height;
    string name;
    public:
    int getAge(){
        return this->age;
    }
 };
int main(){

Student first;
cout<<"sab sahi chal raha hai"<<endl;
return 0;
}
