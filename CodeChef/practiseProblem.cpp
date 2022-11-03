#include <iostream>
using namespace std;
int main()
{
    int a, b;
    char p;
    cin >> a >> b >> p;

    switch (p)
    {
    case '+':
        cout << a + b << endl;
        break;

    case '-':
        cout << a - b << endl;
        break;

    case '*':
        cout << a * b << endl;
        break;

    case '/':
        cout << a / b << endl;
        break;

    default:
        cout << "Plz enter correct input" << endl;
        break;
    }
    return 0;
}