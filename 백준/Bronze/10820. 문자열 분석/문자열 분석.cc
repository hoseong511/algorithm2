#include <iostream>
#include <cctype>
// #pragma GCC optimize("O3")
// #pragma GCC optimize("Ofast")
// #pragma optimize("unroll-loops")
#define FAST ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;
int main()
{
	FAST;
	string input;
	while (getline(cin, input)) {
		int u, l, n, sp;
		u = l = n = sp = 0;
		for (auto x : input) {
			if (isdigit(x)) n++;
			else if (isspace(x)) sp++;
			else if (isupper(x)) u++;
			else if (islower(x)) l++;
		}
		cout << l << ' ' << u << ' ' << n << ' ' << sp << '\n';
	}
	return 0;
}
