#include<iostream>
#include<string>
#include <ctime>

using namespace std;
int main() {
	int m, n;
	cin >> m >> n;
	char**   arr = new char*[m];
	for (int i = 0; i < m; i++)
	{
		arr[i] = new char[n];
	}

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if ((i + j) % 2 == 0) {
				arr[i][j] = '#';
			}
			else {
				arr[i][j] = '*';
			}
		}

	}

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;

	}
	system("pause");
}