#include <iostream>
#include <queue>
#include <algorithm>
// #pragma GCC optimize("O3")
// #pragma GCC optimize("Ofast")
// #pragma optimize("unroll-loops")
#define FAST ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int main()
{
	FAST;
	int N;
	queue<int> q;
	cin >> N;
	for (int i = 0; i < N; i++) {
		string cmd;
		int arg;
		cin >> cmd;
		if (cmd == "push") {
			cin >> arg;
			q.push(arg);
		} else if (cmd == "pop") {
			if (!q.empty()) {
				cout << q.front() << '\n';
				q.pop();
			} else {
				cout << -1 << '\n';
			}
		} else if (cmd == "size") {
			cout << q.size() << '\n';
		} else if (cmd == "empty") {
			cout << (q.empty() ? 1 : 0) << '\n';
		} else if (cmd == "front") {
			cout << (q.empty() ? -1 : q.front()) << '\n';
		} else if (cmd == "back") {
			cout << (q.empty() ? -1 : q.back()) << '\n';
		}
	}
	return 0;
}
