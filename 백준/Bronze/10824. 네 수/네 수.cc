#include <iostream>
#include <vector>
// #pragma GCC optimize("O3")
// #pragma GCC optimize("Ofast")
// #pragma optimize("unroll-loops")
#define FAST ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int main()
{
	FAST;
	vector<string> v(4);
	for (int i = 0; i < 4; i++) {
		cin >> v[i];
	}
	cout << stoll(v[0] + v[1]) + stoll(v[2] + v[3]);
	
	return 0;
}
