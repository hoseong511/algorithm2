#include <iostream>
#include <vector>
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
	vector<int> v;
	cin >> N;
	for (int i = 0; i < N; i++) {
		int input;
		string cmd;
		cin >> cmd;
		if (cmd == "push") {
			cin >> input;
			v.push_back(input);
		} else if (cmd == "top") {
			cout << (!v.empty() ? v.back() : -1) << '\n';
		} else if (cmd == "size") {
			cout << v.size() << '\n';
		} else if (cmd == "empty") {
			cout << (v.empty() ? 1 : 0) << '\n';
		} else if (cmd == "pop") {
			if (!v.empty()) {
				cout << v.back() << '\n';
				v.pop_back();
				continue;
			}
			cout << -1 << '\n';
		}
	}
	return 0;
}
