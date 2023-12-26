#include <iostream>
#define FAST ios::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
int main()
{
	FAST;
	int N;
	cin >> N;
	for (int i = 0; i < N * 2 - 1; i++) {
		for (int j = 0; j < 2 * N - 1; j++) {
			if (i < N - 1) {
				if (i <= j && j < 2 * N - 1 - i) cout << '*';
				else if (j < i) cout << ' ';
			} else if (i == N - 1) {
				if (j == N - 1) cout << '*';
				else if (j < N - 1) cout << ' ';
			} else {
				if (N - 2 - (i % N) <= j && j <= N + (i % N)) cout << "*";
				else if (j < N - 2 - (i % N)) cout << ' ';
			}
		}
		cout << '\n';
	}
	return 0;
}
