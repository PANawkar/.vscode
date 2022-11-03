#include <iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, count = 0, temp = 0;
		cin >> n;
		string arr[n];
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
			if (arr[i] == "START38")
			{
				count++;
			}
			else if (arr[i] == "LTIME108")
			{
				temp++;
			}
		}
		cout << count << " " << temp << endl;
	}

	return 0;
}
