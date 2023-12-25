#include <iostream>
#define FAST ios::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
int main()
{
	FAST;
	int T, a, b;
	cin >> T;
	for (int i = 1; i < T + 1; i++)
	{
		cin >> a >> b;
		cout << "Case #" << i << ": " << a + b << '\n';
	}
	return 0;
}
