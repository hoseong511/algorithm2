#include <iostream>
#include <list>
#include <iterator>
#include <algorithm>
// #pragma GCC optimize("O3")
// #pragma GCC optimize("Ofast")
// #pragma optimize("unroll-loops")j
#define FAST ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;


std::ostream& operator<< (ostream& out, list<char> lst)
{
	for (auto x : lst) {
		out << x;
	}
	return out;
}

int main()
{
	FAST;
	string inp;
	list<char> lst;
	int N;
	cin >> inp >> N;
	for (auto x : inp) {
		lst.push_back(x);
	}
	auto L = lst.end();
	for (int i = 0; i < N; i++) {
		char cmd, arg;
		cin >> cmd;
		if (cmd == 'P') {
			cin >> arg;
			lst.insert(L, arg);
		} else if (cmd == 'L') {
			if (L != lst.begin())
				L--;
		} else if (cmd == 'D') {
			if (L != lst.end())
				L++;
		} else if (cmd == 'B') {
			if (L != lst.begin()) {
				L--;
				L = lst.erase(L);
			}
		}
	}
	cout << lst;
	return 0;
}
