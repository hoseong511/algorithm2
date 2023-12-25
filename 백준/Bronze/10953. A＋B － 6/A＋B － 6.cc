#include <iostream>
using namespace std;
int main()
{
	int T, a, b;
	cin >> T;
	for (int i = 0; i < T; i++)
	{
		scanf("%d,%d", &a, &b);
		cout << a + b << '\n';
	}
	return 0;
}
