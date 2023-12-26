#include <iostream>
#define FAST ios::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
int main()
{
	FAST;
	int N;
	cin >> N;
	for (int i = 0; i < N * 2 - 1; i++) {
		for (int j = 0; j < N; j++) {
			if (i < N - 1) {
				cout << (i - (N - 1) + j >= 0 ? '*' : ' ');
			} else if (i == N - 1) {
				cout << '*';
			} else {
				cout << (N - 1 - i + j >= 0 ? '*' : ' ');
			}
		}
		cout << '\n';
	}
	return 0;
}
