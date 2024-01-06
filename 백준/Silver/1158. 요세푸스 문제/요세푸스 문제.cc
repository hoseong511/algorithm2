#include <iostream>
#include <queue>
#include <algorithm>
// #pragma GCC optimize("O3")
// #pragma GCC optimize("Ofast")
// #pragma optimize("unroll-loops")j
#define FAST ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

int main()
{
	FAST;
	queue<int> q;
	int N, K, idx;
	char comm[3] = {0, ' ', 0};
	cin >> N >> K;
	for (int i = 1; i <= N; i++) {
		q.push(i);
	}
	cout << '<';
	idx = 0;
	while (!q.empty()) {
		if (idx == K - 1) {
			cout << comm << q.front();
			comm[0] = ',';
			idx = 0;
		} else {
			q.push(q.front());
			idx++;
		}
		q.pop();
	}
	cout << '>';
	return 0;
}
