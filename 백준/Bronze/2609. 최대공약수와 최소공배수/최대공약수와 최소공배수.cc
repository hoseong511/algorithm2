#include <iostream>
#include <algorithm>
// #pragma GCC optimize("O3")
// #pragma GCC optimize("Ofast")
// #pragma optimize("unroll-loops")j
#define FAST ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

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

int main()
{
	FAST;
	int A, B;
	int g, l;
	cin >> A >> B;
	g = gcd(A, B);
	l = A * B / g;
	cout << g << '\n';
	cout << l << '\n';
	return 0;
}
