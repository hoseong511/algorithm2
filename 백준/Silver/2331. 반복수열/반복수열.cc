#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <cmath>
// #pragma GCC optimize("O3")
// #pragma GCC optimize("Ofast")
// #pragma optimize("unroll-loops")j
#define FAST ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int main()
{
	FAST;
	int A, P;
	vector<string> v;
	int chk[240000]={0,};
	cin >> A >> P;
	v.push_back(to_string(A));
	chk[A] += 1;
	int i = 1;
	while (1) {
		int res = 0;
		for (auto x : v[i - 1]) {
			res += pow(x - '0', P);
		}
		v.push_back(to_string(res));
		chk[res] += 1;
		if (chk[res] == 2) {
			break;
		}
		i++;
	}
	int cnt = 0;
	for (auto x : v) {
		if (chk[stoi(x)] == 2) break;
		cnt++;
	}
	cout << cnt ;
	return 0;
}
