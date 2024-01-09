#include <iostream>
#include <algorithm>
// #pragma GCC optimize("O3")
// #pragma GCC optimize("Ofast")
// #pragma optimize("unroll-loops")j
#define FAST ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

vector<int> res;

int gcd(int a, int b)
{
	int c;
	while (b) {
		c = a % b; 
		a = b;
		b = c;
	}
	return a;
}

long long comb(vector<int> &lst)
{
	long long res = 0;
	int size = lst.size();
	for (int i = 0; i < size - 1; i++) {
		for (int j = i + 1; j < size; j++) {
			res += gcd(lst[i],lst[j]);
		}
	}
	return res;
}

int main()
{
	FAST;
	int T, N;
	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> N;
		vector<int> v(N);
		for (int j = 0; j < N; j++) {
			cin >> v[j];
		}
		cout << comb(v) << '\n';
	}
	return 0;
}
