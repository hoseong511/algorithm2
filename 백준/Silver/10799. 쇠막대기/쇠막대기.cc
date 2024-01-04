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
	string input;
	bool is_ray;
	int res = 0;
	vector<int> v;
	cin >> input;
	for (auto x: input) {
		if (x == '(') {
			is_ray = true;
			v.push_back(x);
		} else if (x == ')') {
			v.pop_back();
			if (is_ray) {
				res += v.size();
				is_ray = false;
			} else {
				res += 1;
			}
		}
	}
	cout << res;
	return 0;
}
