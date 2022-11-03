#include<iostream>
using namespace std;
float area(int a){
    float areaofcircle= 3.14*a*a;
    return (areaofcircle);
}
float circum(int a){
    float cir=2*3.14*a;
    return(cir);
}
int main()

{
    float n;
    cin>>n;
    cout<<area(n)<<" \n"<<endl;
    cout<<circum(n)<<" \n"<<endl;
    return 0;
}