//"5 3 2 1 4" to    "5 4 3 2 1"



#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
    string s="45638299";

    sort(s.begin(), s.end(),greater<int>());
    cout<<s<<endl;
    return 0;
}