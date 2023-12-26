#include <iostream>
#define FAST ios::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
int main()
{
	FAST;
	int N;
	cin >> N;
	for (int i = 0; i < N * 2 - 1; i++) {
		for (int j = 0; j < 2 * N; j++) {
			if (i < N - 1) {
				if (j <= i || 2 * N - 1 - i <= j) cout << '*';
				else cout << ' ';
			} else if (i == N - 1) {
				cout << '*';
			} else {
				if (j < N - 1 - (i % N) || N + (i % N) < j) cout << '*';
				else cout << ' ';
			}
		}
		cout << '\n';
	}
	return 0;
}
