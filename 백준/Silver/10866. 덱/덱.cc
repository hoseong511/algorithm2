#include <iostream>
#include <deque>
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
	deque<int> dq;
	cin >> N;
	for (int i = 0; i < N; i++) {
		string cmd;
		int arg;
		cin >> cmd;
		if (cmd == "push_front") {
			cin >> arg;
			dq.push_front(arg);
		} else if (cmd == "push_back") {
			cin >> arg;
			dq.push_back(arg);
		} else if (cmd == "pop_back") {
			if (!dq.empty()) {
				cout << dq.back() << '\n';
				dq.pop_back();
			} else {
				cout << -1 << '\n';
			}
		} else if (cmd == "pop_front") {
			if (!dq.empty()) {
				cout << dq.front() << '\n';
				dq.pop_front();
			} else {
				cout << -1 << '\n';
			}
		} else if (cmd == "size") {
			cout << dq.size() << '\n';
		} else if (cmd == "empty") {
			cout << (dq.empty() ? 1 : 0) << '\n';
		} else if (cmd == "front") {
			cout << (dq.empty() ? -1 : dq.front()) << '\n';
		} else if (cmd == "back") {
			cout << (dq.empty() ? -1 : dq.back()) << '\n';
		}
	}
	return 0;
}
