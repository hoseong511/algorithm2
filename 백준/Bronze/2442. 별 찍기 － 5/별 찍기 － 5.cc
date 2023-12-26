#include <iostream>
#define FAST ios::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
int main()
{
	FAST;
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < 2 * N - 1 ; j++) {
			if (N - 1 - i <= j && j <= N - 1 + i) cout << '*'; // 4, 345, 23456, 1234567, 012345678
			else if (j < N - 1 -i) cout << ' ';
		}
		cout << '\n';
	}
	return 0;
}
