#include<iostream>
using namespace std;

bool checkFatoriel(int n)
{
	for (int i = 1;; i++) 
	{
		if (n % i == 0) 
		{
			n /= i;
		}
		else 
		{
			break;
		}
	}

	if (n == 1) 
	{
		return true;
	}
	else 
	{
		return false;
	}
}
int main()
{
	int n;
	cin >> n;

	bool ans = checkFatoriel(n);
	if (ans == 1)
	{
		cout << "Yes\n";
	}
	else
	{
		cout << "No\n";
	}

	system("pause");
}

