#include <iostream>
#define FAST ios::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
int main()
{
	FAST;
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < 2 * N - 1; j++) {
			if (i < N - 1) {
				if (N - 1 - i == j || j == N - 1 + i) cout << '*';
				else if (j < N - 1 + i) cout << ' ';
			} else if (i == N - 1) {
				cout << '*';
			}
		}
		cout << '\n';
	}
	return 0;
}
