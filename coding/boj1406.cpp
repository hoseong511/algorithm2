#include <iostream>
#include <list>
#include <iterator>
#include <algorithm>
// #pragma GCC optimize("O3")
// #pragma GCC optimize("Ofast")
// #pragma optimize("unroll-loops")j
#define FAST ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int main()
{
	FAST;
	string inp;
	list<char> lst;
	int N;
	size_t L;
	cin >> inp;
	cin >> N;
	L = inp.length();
	for (auto x : inp) {
		lst.push_back(x);
	}
	for (size_t i = 0; i < N; i++) {
		char cmd, arg;
		cin >> cmd;
		if (cmd == 'P') {
			cin >> arg;
			if (L == lst.size()) lst.push_back(arg);
			else lst.insert((lst.begin() + L), 1, arg);
			L++;
		} else if (cmd == 'L') {
			if (L == 0) continue ;
			L--;
		} else if (cmd == 'D') {
			if (L == lst.size()) continue ;
			L++;
		} else if (cmd == 'B') {
			if (L == 0) continue ;
			if (L == lst.size()) lst.pop_back();
			else {
				//string tmp(lst, L, lst.size() - L);
				lst.erase(lst.begin() + L);
				//lst.merge(tmp);
			}
			L--;
		}
	}
	for (auto x : lst)
		cout << x;
	return 0;
}
