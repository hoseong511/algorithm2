#include <iostream>
#define FAST ios::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
int main()
{
	FAST;
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		for (int j = N; j > i; j--)
			cout << '*';
		cout << '\n';
	}
	return 0;
}
