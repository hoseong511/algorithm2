#include <iostream>
#include <algorithm>
#include <cmath>
#define FAST ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

#define MAX 10000001
int main()
{
	FAST;
	int N;
	vector<int> v;
	cin >> N;
	v.assign(N + 1, 0);
	for (int i = 2; i < sqrt(N + 1); i++) {
		if (v[i] == 1) continue ;
		for (int j = 2; i * j < N + 1; j++) {
			v[i * j] = 1;
		}
	}
	while (N != 1) {
		int i;
		for (i = 2; i < N + 1; i++) {
			if (v[i] == 0 && N % i == 0) {
				cout << i << '\n';
				break ;
			}
		}
		N /= i;
	}
	return 0;
}