#include <iostream>
#include <algorithm>
// #pragma GCC optimize("O3")
// #pragma GCC optimize("Ofast")
// #pragma optimize("unroll-loops")j
#define FAST ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

long long gcd(long long a, long long b)
{
	long long c;
	while (b) {
		c = a % b; 
		a = b;
		b = c;
	}
	return a;
}

int main()
{
	FAST;
	long long A, B, g;
	cin >> A >> B;
	g = gcd(A, B);
	for (long long i = 0; i < g; i++) {
		cout << '1';
	}
	return 0;
}
