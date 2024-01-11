#include <iostream>
#include <algorithm>
#include <cmath>
#define FAST ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

#define MAX 10000001
int main()
{
	FAST;
	int N;
	cin >> N;
	if (N == 0) {
		cout << 1;
		return 0;
	}
	int res = 1;
	while (N > 0) {
		res *= N;
		N -= 1;
	}
	cout << res;
	return 0;
}